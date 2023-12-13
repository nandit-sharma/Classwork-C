#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18 && age <=50) {
        if (age >= 18 && age <=25){
            printf("CONGRATULATIONS...!!\nYou are eligible for GRADE A job !");
        }
        else{
            printf("You are eligible for GRADE B job");

        }
    }
    else{
        printf("You are not eligible for this job");
    }
    
    return 0;
}