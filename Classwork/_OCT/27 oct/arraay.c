#include <stdio.h>

void main() {
    int max[50] ,i, n; 
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the values of array: ");
    for(i = 0; i<n;i++)
    {
        scanf("%d", &max[i]);
    }
    for(i =0;i<n;i++)
    {
        printf("The entered %d element of array is %d: \n", i,max[i]);
    }
}