#include <stdio.h>

int main() {
    int num,n=0, i, q;
    printf("Enter any number: ");
    scanf("%d", &num);
    if (num==1){
        printf("The number is not prime.\n");
    }
    else if (num<0){
        printf("Negative integers can not be prime.\n");
    }
    else if (num==0){
        printf("The number is neither prime nor composite.\n");
    }else{
        for(i=1; i<=num; i++){
            q = num%i;
            if (q == 0){
                n+=1;
            }
        }

        if (n <= 2){
            printf("The number is prime.\n");
        }else{
            printf("The number is not prime.\n");

        }

    }


    return 0;
}