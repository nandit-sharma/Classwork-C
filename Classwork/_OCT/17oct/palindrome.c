#include <stdio.h>

int main() {
    int numberEntered,x, reversedNumber=0;
    printf("Enter a number to be revered and checked for palindrome number : ");
    scanf("%d",&numberEntered);
    for(x= numberEntered; numberEntered!=0;){
        reversedNumber=reversedNumber*10 + x%10;
    }
    if(numberEntered==reversedNumber){
        printf("Entered number is a palindrome number");
    }
    else{
        printf("Entered number is not a palindrome number");
    }
    return 0;
}