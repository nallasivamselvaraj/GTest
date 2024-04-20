# Setting up Google Test in Jenkins

## Prerequisites
- **libgtest-dev**: Google Test development libraries.
- **CMake**: A cross-platform build system.

## Installation Steps
1. **Install Dependencies**: Ensure that `libgtest-dev` and `cmake` are installed on your system. You can install them using your system's package manager. For example, on Ubuntu, you can run:
    ```bash
    sudo apt-get install libgtest-dev cmake
    ```

2. **Jenkins Configuration**: Make sure Jenkins is installed and configured properly on your system.

3. **Create Jenkins Pipeline Script**: Create a Jenkins pipeline script to automate the build and test process. Below is an example Jenkins pipeline script:

## Configuration in Jenkins

### Create Pipeline Project
1. In Jenkins, navigate to the main dashboard and click on "New Item" to create a new project.
2. Enter a name for your project and select "Pipeline" as the project type.
3. Click on "OK" to create the project.

### Pipeline Script
1. In the project configuration page, scroll down to the "Pipeline" section.
2. Select "Pipeline script" from the "Definition" dropdown menu.
3. scm
4. Click on "Save" to save the pipeline configuration.

## Save and Run

1. After saving the pipeline configuration, Jenkins will automatically detect changes and trigger a build.
2. Alternatively, you can manually trigger a build by clicking on the "Build Now" button in the project dashboard.

## View Results

1. Once the build is complete, navigate to the project dashboard in Jenkins.
2. Click on the specific build number to view detailed build information.
3. In the build details page, navigate to the "Console Output" to view the build logs.
4. Additionally, you can view the test results by navigating to the "Test Result" tab in the build details page.

## Additional Considerations
- Make sure that your Google Test framework is properly set up within your project. 
- Ensure that your tests are written following Google Test conventions and that the `runTests` script correctly executes all tests.
