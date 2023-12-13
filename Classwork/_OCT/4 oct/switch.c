
#include <stdio.h>

int main() {
    int sum = 10, c = 10;
    switch(c){

        case 1:
            sum = sum+10;
            

        case 2:
            sum = sum+9;
            
        case 3:
            sum = sum+8;
            
        case 4:
            sum = sum+7;
            

        default:
            sum= sum-5;

    }
    printf("sum = %d\n", sum);
    return 0;
}