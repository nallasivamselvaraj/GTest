pipeline {
    agent any

    stages {
        stage('Checkout') {
            steps {
                // Checkout the source code from GitHub
                git branch: 'master', url: 'https://github.com/nallasivamselvaraj/GTest.git'
            }
        }
        stage('Build Project') {
            steps {
                // Use CMake to configure the build and compile the source code
                sh 'cmake .'
                sh 'make'
            }
        }
     
        stage('Run Tests') {
            steps {
                // Compile and run the tests
                sh './runTests'
            }
        }
    }
}
