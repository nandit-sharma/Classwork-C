#include <stdio.h>

void main() {
    int num,i, arr[30], loc;
    printf("Enter the size of an array: ");
    scanf("%d", &num);
    printf("Enter the elements of an array: ");
    for(int i=0; i<num;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the location to delete: ");
    scanf("%d",&loc);
    for(int i; num>loc; loc++){
        arr[loc-1]=arr[loc];
    }
    printf("The remaining array is: %d", arr[loc]);
}