#include <stdio.h>

void main() {
    int arr[]= {1, 2, 3, 4, 5, 6};
    int i;
    for ( i = 0; i < 6; i++)
    {
        printf("\n%d %d %d %d", arr[i], *(arr), *(arr+i), *(i+arr));
    }
    

}