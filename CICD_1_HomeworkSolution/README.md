# CD/CD: Homework 1 - Solution

## Step 1: Create a GitHub Repository

- Log in to GitHub and create a repository named `Automated-Build-BMW`.
- Check the option to add a `README.md` file.

## Step 2: Clone the Repository Locally

```bash
git clone https://github.com/your-username/Automated-Build-BMW.git
cd Automated-Build-BMW
```

## Step 3: Create a Simple Project

- Inside the repository directory, create a `main.cpp` file:

### `main.cpp`
```cpp
#include <iostream>

int main() {
    std::cout << "Hello, BMW fellows!" << std::endl;
    return 0;
}
```

## Step 4: Initialize Git and Commit Your Code

```bash
git init
git add .
git commit -m "Initial commit with C++ project"
git push origin main
```

### Expected Output:
```bash
[main (root-commit) abc1234] Initial commit with C++ project
 1 file changed, 5 insertions(+)
 create mode 100644 main.cpp
```

## Step 5: Set Up a GitHub Workflow File

- Create the `.github/workflows/build.yml` file:

### `.github/workflows/build.yml`
```yaml
name: C++ Build

on: [push, pull_request]

jobs:
  build:
    runs-on: ubuntu-latest
    
    steps:
      - name: Checkout Repository
        uses: actions/checkout@v3
        
      - name: Install g++
        run: sudo apt-get update && sudo apt-get install -y g++
        
      - name: Compile C++ Code
        run: g++ -o main main.cpp
        
      - name: Run Executable
        run: ./main
```

## Step 6: Push Workflow File to GitHub

```bash
git add .github/workflows/build.yml
git commit -m "Add GitHub Actions workflow"
git push origin main
```

### Expected Output:
```bash
[main abc5678] Add GitHub Actions workflow
 1 file changed, 12 insertions(+)
 create mode 100644 .github/workflows/build.yml
```

## Step 7: Verify GitHub Actions Execution

- Navigate to the **Actions** tab in your GitHub repository.
- Wait for the workflow to execute.
- Verify that all steps complete successfully.

### Expected Output in GitHub Actions:
```bash
Hello, GitHub Actions!
```

## Step 8: View Git History

```bash
git log --oneline
```

### Expected Output:
```bash
abc5678 Add GitHub Actions workflow
abc1234 Initial commit with C++ project
```

