# CD/CD: Homework 2

## Introduction

In modern software development, automating the build process ensures that projects remain consistent and reliable. This homework will guide you through setting up a continuous integration (CI) pipeline using GitHub Actions for a C++ project built with CMake. By the end, you will have a fully automated workflow that compiles and executes your code whenever changes are pushed to the repository.

## Task Overview

You will create a simple C++ project, configure a CMake build system, and set up a GitHub Actions pipeline to automate the compilation and execution of your project.

### 1. Setting Up Your Repository
- Log in to GitHub and create a new repository named `CMake-Automation-Demo`.
- Add a `README.md` file to initialize the repository.

### 2. Cloning Your Repository
- Clone the repository to your local machine:
  ```bash
  git clone https://github.com/your-username/CMake-Automation-Demo.git
  cd CMake-Automation-Demo
  ```

### 3. Creating a C++ Project
- Inside the repository, create a `src` folder and add a C++ source file:

  #### `src/app.cpp`
  ```cpp
  #include <iostream>

  int main() {
      std::cout << "Automated C++ Build with CMake!" << std::endl;
      return 0;
  }
  ```

- Define the CMake build system by creating a `CMakeLists.txt` file:

  #### `CMakeLists.txt`
  ```cmake
  cmake_minimum_required(VERSION 3.10)
  project(AutoCMakeProject)
  
  add_executable(my_app src/app.cpp)
  ```

### 4. Initializing Git and Committing Your Code
- Run the following commands to track your project with Git:
  ```bash
  git init
  git add .
  git commit -m "Initial commit: CMake project setup"
  git push origin main
  ```

### 5. Automating Builds with GitHub Actions
- Set up a workflow file to automate the build process by creating `.github/workflows/ci-build.yml`:

  #### `.github/workflows/ci-build.yml`
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

### 6. Committing and Pushing Workflow File
- Save and commit the workflow file:
  ```bash
  git add .github/workflows/ci-build.yml
  git commit -m "Add automated CI pipeline with CMake"
  git push origin main
  ```

### 7. Checking Your Pipeline Execution
- Navigate to the **Actions** tab in your GitHub repository.
- Confirm that the CI workflow executes successfully upon pushing your changes.

### 8. Extending Your Project
- Modify `src/app.cpp` to take user input and process it before displaying an output.
- Update `CMakeLists.txt` accordingly if needed.
- Push the changes and observe the CI/CD pipeline executing the new build.
- Try introducing an intentional error in the code to see how GitHub Actions responds to a failed build.

By completing this assignment, you will have an automated CI pipeline for compiling and running C++ projects with CMake, helping ensure that your code remains error-free across all future updates.

