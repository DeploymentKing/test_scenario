node {

  stage('build binary') {
    sh 'make'
  }

  stage('run binary') {
    sh './test && echo "ran okay" || echo "designed to fail randomly"'
  }

}
