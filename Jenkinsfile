node {

  stage('build binary') {
    checkout scm
    sh 'make'
  }

  stage('run binary') {
    sh './test && echo "ran okay" || echo "designed to fail randomly"'
  }

}
