#include <stdio.h>

int main() {
    int i=0, a = 1, n;
    printf("Enter the number of even numbers you want to print: ");
    scanf("%d", &n);
    
    do
    {
        a+=1;
        i+=2;
        printf("%d\n", i);
    } while (a<=n);
    
    return 0;
}