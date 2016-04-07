# Basic test scenario 

## Goals

 - Jenkins server running
   - Must be installed from a CM management of choice
 - Create a job to make this project
   - Jobs can be created manually or by CM, whichever is preferred
 - Save the build artifact 'test' on a successful build
   - Saving to a common directory is sufficient
   - Using something like copy artifact plugin is better
 - On successful build trigger a job that uses the artifact
   - There is a roughly 50% chance to exit(1) for job failure
 - Use language of choice to gather last build status from the execute job
   - Can use a developed API or just poke REST API and process the json
 - Trigger the execute job by any method until status changes
   - Verify the script to check status changes

## Dependencies

 - make
 - gcc
 - <stdio.h>
 - <time.h>
 - <sys/time.h>
 - <stdlib.h>
 - <unistd.h>
 - <string.h>
 - <openssl/sha.h>



