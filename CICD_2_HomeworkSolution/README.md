# CD/CD: Homework 2 - Solution

# Solution: Automating C++ Builds with CMake and GitHub Actions

## Step 1: Create and Initialize Repository

1. Log in to GitHub and create a new repository named `CMake-Automation-Demo`.
2. Clone the repository to your local machine:
   ```bash
   git clone https://github.com/your-username/CMake-Automation-Demo.git
   cd CMake-Automation-Demo
   ```

## Step 2: Create C++ Project

1. Inside the repository, create a `src` folder and add the following file:

   **`src/app.cpp`**:
   ```cpp
   #include <iostream>

   int main() {
       std::cout << "Automated C++ Build with CMake!" << std::endl;
       return 0;
   }
   ```

2. Define the CMake build system:

   **`CMakeLists.txt`**:
   ```cmake
   cmake_minimum_required(VERSION 3.10)
   project(AutoCMakeProject)
   
   add_executable(my_app src/app.cpp)
   ```

## Step 3: Commit and Push Code

```bash
   git add .
   git commit -m "Initial commit: CMake project setup"
   git push origin main
```

## Step 4: Configure GitHub Actions Workflow

1. Create the workflow directory:
   ```bash
   mkdir -p .github/workflows
   ```

2. Add the following file:

   **`.github/workflows/ci-build.yml`**:
   ```yaml
   name: CMake CI Pipeline

   on: [push, pull_request]

   jobs:
     build:
       runs-on: ubuntu-latest
       
       steps:
         - name: Checkout Source Code
           uses: actions/checkout@v3
           
         - name: Install Build Dependencies
           run: sudo apt-get update && sudo apt-get install -y cmake g++
           
         - name: Configure Build System
           run: cmake -B build
           
         - name: Compile Project
           run: cmake --build build
           
         - name: Execute Binary
           run: ./build/my_app
   ```

## Step 5: Commit and Push Workflow

```bash
   git add .github/workflows/ci-build.yml
   git commit -m "Add automated CI pipeline with CMake"
   git push origin main
```

## Step 6: Verify Pipeline Execution

1. Navigate to the **Actions** tab in your GitHub repository.
2. Check that the workflow executed successfully. The expected log output should look similar to:

   ```plaintext
   Automated C++ Build with CMake!
   ```

## Step 7: Modify and Test Changes

1. Modify `src/app.cpp` to take user input:
   ```cpp
   #include <iostream>
   
   int main() {
       std::string name;
       std::cout << "Enter your name: ";
       std::cin >> name;
       std::cout << "Hello, " << name << "!" << std::endl;
       return 0;
   }
   ```

2. Commit and push the changes:
   ```bash
   git add src/app.cpp
   git commit -m "Modify app to accept user input"
   git push origin main
   ```

3. Check the **Actions** tab again to verify that the updated code builds and runs successfully.

