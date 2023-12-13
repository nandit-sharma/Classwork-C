#include <time.h>
#include <stdio.h>

int main() {
    time_t rawtime;
    struct tm *timeinfo;
    char buffer[80];
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(buffer, 80, "Current date and time: %Y-%m-%d || %H:%M:%S", timeinfo);
    printf("%s\n", buffer);
    return 0;
}