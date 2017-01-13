node {

  stage('build binary') {
    checkout scm
    sh 'make'
  }

  stage('run binary') {
    try {
      sh './test'
    } catch(e) {
      echo "test is desigend to randomly fail"
      currentBuild.result = "UNSTABLE"
    }
  }
}
