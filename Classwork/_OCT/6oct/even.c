#include <stdio.h>

int main() {
    int i=0, a = 1, n;
    printf("Enter the number of even numbers you want to print: ");
    scanf("%d", &n);
    while (a<=n) 
    {
        a+=1;
        i+=2;
        printf("%d\n", i);
    }
    
    return 0;
}