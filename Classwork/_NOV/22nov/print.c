#include <stdio.h>

void main() {
    int a, b, i;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++)
    {
        a++;
    }
    printf("%d\n", i);
}