# CD/CD: Homework 3 - Solution

## Project Files

### 1. **`CMakeLists.txt`** (Root CMake Configuration)
This file configures the build system using **CMake**, specifies the project details, and enables **Clang-Tidy** for static code analysis.

```cmake
cmake_minimum_required(VERSION 3.10)
project(ClangTidyCDDemo)

set(CMAKE_CXX_STANDARD 17)

add_executable(my_app src/app.cpp)
# Enable Clang-Tidy for static analysis
set(CMAKE_CXX_CLANG_TIDY "clang-tidy;-checks=*")
```

---

### 2. **`src/app.cpp`** (C++ Source Code)
This is the simple C++ source file to be analyzed and built.

```cpp
#include <iostream>

int main() {
    std::cout << "Automated C++ Build with Clang-Tidy and CMake!" << std::endl;

    // Introducing an issue: unused variable
    int unusedVariable = 42;

    // Introducing incorrect formatting
    std::cout << "Hello, world!" <<std::endl;  // Incorrect formatting (missing space)

    return 0;
}
```

---

### 3. **`.github/workflows/ci-cd-pipeline.yml`** (GitHub Actions CI/CD Pipeline)
This file defines the GitHub Actions pipeline that automates the CI/CD process, including the Clang-Tidy static analysis, build, and deployment.

```yaml
name: Clang-Tidy CI/CD Pipeline

on: [push, pull_request]

jobs:
  # CI Job: Static Analysis, Build, and Test
  build:
    runs-on: ubuntu-latest

    steps:
      - name: Checkout Source Code
        uses: actions/checkout@v3

      - name: Install Build Dependencies
        run: sudo apt-get update && sudo apt-get install -y cmake clang clang-tidy g++

      - name: Configure Build System
        run: cmake -B build

      - name: Run Clang-Tidy (Static Analysis)
        run: cmake --build build --target clang-tidy

      - name: Compile Project
        run: cmake --build build

      - name: Run Tests
        run: ./build/my_app

  # CD Job: Deployment to Production
  deploy:
    runs-on: ubuntu-latest
    needs: build
    if: success()  # Only deploy if build and tests are successful

    steps:
      - name: Checkout Source Code
        uses: actions/checkout@v3

      - name: Deploy to Production
        run: |
          echo "Deploying to production environment..."
          # Example: Just a simulation of deployment
```

---

### 4. **`.clang-tidy`** (Clang-Tidy Configuration File)
This file is optional and can be used to specify custom static analysis rules. For now, we will use default checks.

```yaml
Checks:          '*, -clang-analyzer-*'
CheckOptions:
  - key:             modernize-use-auto.IgnoreMacros
    value:           'false'
```

---

## Expected Output

When you push the changes to your GitHub repository, the following events will occur:

### 1. **Clang-Tidy Static Analysis**

If there are any issues in your code, **Clang-Tidy** will catch them during the `clang-tidy` stage of the pipeline. For example, the unused variable and incorrect formatting issues in `src/app.cpp` will be detected.

The expected output in the GitHub Actions logs during **Clang-Tidy** static analysis might look like this:

```
clang-tidy version 12.0.1 (tags/RELEASE_1201/final)
Starting check of source file src/app.cpp...

src/app.cpp: In function ‘int main()’:
src/app.cpp:9:5: warning: unused variable ‘unusedVariable’ [-Wunused-variable]
    int unusedVariable = 42;
    ^

src/app.cpp:12:56: warning: missing space between '<<' and string literal [readability-magic-numbers]
    std::cout << "Hello, world!" <<std::endl;  // Incorrect formatting (missing space)

Checks performed: 100
Warnings found: 2

clang-tidy completed with errors: warnings, compilation failed.
```

If the static analysis reports any warnings or errors, the build will stop, and subsequent stages (like the build or deployment) will not be executed.

---

### 2. **Build and Compilation**

If the **Clang-Tidy** stage passes, the build proceeds. The expected output of the build stage might look like this:

```
-- The CXX compiler identification is GNU 9.3.0
-- Check for working CXX compiler: /usr/bin/c++
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Configuring done
-- Generating done
-- Build files have been written to: /home/runner/work/Clang-Tidy-CD-Demo/Clang-Tidy-CD-Demo/build

[ 33%] Building CXX object CMakeFiles/my_app.dir/src/app.cpp.o
[ 66%] Linking CXX executable my_app
[100%] Built target my_app

Run tests...
Automated C++ Build with Clang-Tidy and CMake!
Hello, world!
```

If the build is successful, the next step is running the executable.

---

### 3. **Deployment Simulation**

After a successful build and test run, the **Deployment Stage** will simulate deploying the project. The expected output in GitHub Actions might look like:

```
Deploying to production environment...
```

