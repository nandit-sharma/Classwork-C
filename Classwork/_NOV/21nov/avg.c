#include <stdio.h>
int avg(int[],int);
int main() {
    int mark[5] = {99,98,95,96,100},size,average;
    size = sizeof(mark)/sizeof(mark[0]);
    average = avg(mark,size);
    printf("average=%d", average);
    printf("size of the the main fuction array is: %d", sizeof(mark));    
return 0;
}