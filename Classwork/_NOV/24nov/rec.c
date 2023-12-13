#include <stdio.h>

void main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for(int j=0; j<n; j++){
            printf(" ");
        }
        for(int k=0; k<=i; k++){
            printf("%d", k);
        }
        for (int l = i-1; l >= 0; l--)
        {
            printf("%d", l);
        }
        printf("\n");
    }
    
}