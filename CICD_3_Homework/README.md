# CD/CD: Homework 3

## Recap

In the last session, we learned about Continous Deployment (CD) and multi stage pipelines as well as the specifics in the BMW process.

#### Homework Assignmend:

Create a C++ project, configure a CMake build system, integrate static analysis with clang-tidy, and set up both CI and CD steps in a GitHub Actions pipeline. This pipeline should automatically build, test, and deploy the project whenever changes are pushed to the repository.

#### CI Stages:
1. **Static Analysis with Clang-Tidy**:
   - In this stage, **Clang-Tidy** runs as part of the build process to perform static code analysis. This checks for potential issues in your code such as unused variables, coding standard violations, and common bugs. If any issues are found, the build fails, preventing any flawed code from reaching the next stage.
   - To test the static analysis, you can modify your code to introduce potential issues. For example:
     - Add an unused variable:
       ```cpp
       int unusedVariable = 42;
       ```
     - Add incorrect formatting:
       ```cpp
       std::cout << "Hello, world!" <<std::endl;
       ```
   - Push the changes to your repository, and observe the CI pipeline. The **Clang-Tidy** step should catch these issues and report them in the GitHub Actions logs. The pipeline will not proceed to the build and deploy stages if the static analysis fails.

2. **Build Stage**:
   - If the static analysis passes, the pipeline proceeds to the **Build** stage. Here, **CMake** compiles your project using the configurations specified in your `CMakeLists.txt`. If any compilation issues are encountered (e.g., syntax errors or missing files), the build will fail.
   - In this stage, the **clang-tidy** analysis is part of the overall build process, ensuring that only clean code is compiled.

3. **Test Stage**:
   - After the project is successfully built, the next step is to run the tests. In this case, we’re simply running the built application (e.g., `my_app`) to ensure that no runtime errors are encountered. You can later expand this to include more formal unit or integration tests.
   - If any tests fail, the pipeline will stop here, and the deployment step will be skipped.

#### CD Stages:
1. **Deployment Stage**:
   - If the build and test stages pass, the deployment stage runs. This step ensures that only thoroughly tested and error-free code is deployed to your production environment.
   - Depending on your deployment process, this can involve uploading code to a server, deploying to a cloud platform, or any other means of production deployment.
   - You can simulate a production deployment with a simple echo statement or expand this to deploy your application to an actual environment (e.g., using `scp` or a cloud API).

#### What to Check in the Pipeline:
- **Clang-Tidy Output**: The most important output here is from **Clang-Tidy**. Check the logs in GitHub Actions to see if any warnings or errors were raised by `clang-tidy`. If an issue is found, the pipeline will fail at the static analysis step and will not proceed.
- **Pipeline Behavior**: Modify your C++ code and introduce different errors (e.g., unused variables, missing semicolons, incorrect formatting) and observe how the pipeline responds. **Clang-Tidy** should always catch such issues before the build or deployment stages, ensuring only quality code moves forward.

By understanding these stages, you'll have a clear view of how each step in the CI/CD pipeline contributes to ensuring that your code is both of high quality (through static analysis) and reliably deployed (through automated build and deployment processes).