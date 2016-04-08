#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <openssl/sha.h>


int main(int argc, char *argv[])
{
    time_t curtime;
    char buffer[30];
    struct timeval tv;
    int r1, r2;

    const char ibuf[] = "Hello, World";
    const char obuf[20];

    SHA1((unsigned char*)ibuf, strlen(ibuf), (unsigned char*)obuf);

    gettimeofday(&tv, NULL);
    curtime=tv.tv_sec;
    strftime(buffer,30,"%m-%d-%Y  %T.",localtime(&curtime));
    printf("Starting the test at %s %ld\n", buffer, tv.tv_usec);

    srand((unsigned) time(&curtime));

    r1 = rand() % 20;

    usleep(100000);

   for (int i = 0; i < 20; i++) {
        printf("%02x ", obuf[i]);
    }

    printf("\n");

    r2 = rand() % 20;

    gettimeofday(&tv, NULL);
    curtime=tv.tv_sec;
    strftime(buffer,30,"%m-%d-%Y  %T.",localtime(&curtime));
    printf("Completed the test at %s %ld\n", buffer, tv.tv_usec);


    if (r1 < r2 ) {
        printf("Test failed: %d %d\n", r1, r2);
        exit(1);
    } else {
        printf("Test succeeded: %d %d\n", r1, r2);
        exit(0);
    }
}


