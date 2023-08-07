#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
 {
   
    printf("Computer Name: ");
    fflush(stdout);
    system("hostname");

    time_t t;
    struct tm *currentTime;
    char timeString[100];

    time(&t);
    currentTime = localtime(&t);

    strftime(timeString, sizeof(timeString), "%Y-%m-%d %H:%M:%S", currentTime);
    printf("Current Date and Time: %s\n", timeString);

    return 0;
}

