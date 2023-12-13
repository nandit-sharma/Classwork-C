#include <time.h>
void main(){
    time_t t;
    time(&t);
    printf("Current local date and time: %s", ctime(&t));
}