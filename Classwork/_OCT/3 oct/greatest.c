#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter num1: ");
    scanf("%d", &a);
    printf("Enter num2: ");
    scanf("%d", &b);
    printf("Enter num3: ");
    scanf("%d", &c);

    if (a>b){
        if (a>c){
            printf("The greatest number is %d", a);
    }
        else{
            printf("The greatest number is %d", c);
        }
    }
    else if (b>a){
        if (b>c){
            printf("The greatest number is %d", b);
    }
        else{
            printf("The greatest number is %d", c);
        }
    }
    return 0;
}