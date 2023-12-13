#include <stdio.h>

int main() {
    int y, x;
    printf("Enter the number: ");
    scanf("%d", &x);
    printf("\nTABLE OF %d....\n", x);

    for(int i = 1; i <= 10; i++) {
        y = i*x;
        printf("%d x %d = %d\n", x,i,y);
    }

    return 0;
}