#include <stdio.h>
double add(double a, double b) {
    return a + b;
}
double sub(double a, double b) {
    return a - b;
}
double mul(double a, double b) {
    return a * b;
}
double div(double a, double b) {
    if (b!=0)
    {
        return a / b;
    }else{
        printf("Division by zero is not possible\n");
        return 0;
    }
    
    return a / b;
}
double mod(double a, double b) {
    return (int)a % (int)b;
}

char operator;
double a, b, result;
int main() {
    printf("Enter an operator (+, -, *, /, %%) : ");
    scanf("%c", &operator);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    switch (operator)
    {
    case '+':
        result = add(a, b);
        break;
    case '-':
        result = sub(a, b);
        break;
    case '*':
        result = mul(a, b);
        break;
    case '/':
        result = div(a, b);
        break;
    case '%':
        result = mod(a, b);
        break;
    default:
        printf("Invalid operator\n");
        break;
    }
    printf("Result: %lf\n", result);
    return 0;
}