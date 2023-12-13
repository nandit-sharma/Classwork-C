#include <stdio.h>

int main() {
    int i = 0, x;
    printf("Enter the limit of even umbers: \n");
    scanf("%d", &x);
    for (i; i <= x; i+=2){
        printf("%d\n", i);
    }
    return 0;
}