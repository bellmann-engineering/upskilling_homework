# CD/CD: Homework 1

## Recap

In the last session, we learned about using CI/CD for creating and sharing software by doing tasks automatically, so people don't have to do them by hand. 

## Your Tasks

### 1. Create a GitHub Repository:

- Log in to your GitHub account and create a new repository with a descriptive name (e.g., "Automated Build BMW").
- Initialize the repository with a README file.

### 2. Clone the Repository locally:

- Clone the newly created repository to your local machine using:
  ```bash
  git clone https://github.com/your-username/Automated-Build-BMW.git
  ```

### 3. Create a Simple Project:

- Inside your repository directory, create a simple C++ project with a file named `main.cpp` containing the following code:
  
  ```cpp
  #include <iostream>
  
  int main() {
      std::cout << "Hello, BMW fellows!" << std::endl;
      return 0;
  }
  ```

### 4. Initialize Git and Commit Your Code:

- Run the following commands:
  
  ```bash
  git init
  git add .
  git commit -m "Initial commit with C++ project"
  git push origin main
  ```

### 5. Set Up a GitHub Workflow File:

- Inside your repository, create a `.github/workflows/build.yml` file with the following content:
  
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

### 6. Push Workflow File to GitHub:

- Add and commit the workflow file:
  
  ```bash
  git add .github/workflows/build.yml
  git commit -m "Add GitHub Actions workflow"
  git push origin main
  ```

### 7. Verify GitHub Actions Execution:

- Go to the "Actions" tab in your GitHub repository.
- Ensure that the build runs successfully after pushing your changes.
- Check the status of your pipeline in the "Actions" tab to confirm that each step executed correctly.

### 8. View Git History:

- Use `git log` to check your commit history:
  
  ```bash
  git log --oneline
  ```
  
This assignment will help you understand automated builds with GitHub Actions, ensuring your code is compiled and tested automatically upon every push or pull request.

