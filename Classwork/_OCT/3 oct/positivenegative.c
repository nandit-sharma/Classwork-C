#include <stdio.h>

int main() {
    int i;
    printf("Enter any integer: ");
    scanf("%d", &i);
    if (i == 0){
        printf("The integer is zero.\n");
    }
    else if (i < 0){
        printf("The integer is negative.\n");
    }
    else{
        printf("The integer is positive.\n");
    }
    return 0;
}