#include <stdio.h>

int main() {
    int i, a, b;
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5.Modulus\n");
    scanf("%d", &i);
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    if (i == 1)
    {
        printf("The addition is : %d", a+b);
    }
    else if (i == 2){
        printf("The difference is : %d", a-b);

    }
    else if (i == 3){
        printf("The product is : %d", a*b);

    }
    else if (i == 4){
        printf("The quotient is : %.2f", (float)a/(float)b);

    }
    else if (i == 5){
        printf("The remainder is : %d", a%b);

    }
    else{
        printf("Wrong input");
    }
    
    return 0;
}