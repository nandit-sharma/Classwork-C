#include <stdio.h>

int main() {
    int arr[]= {1, 2, 3, 4, 5};
    int new_arr[5];
    for(int i = 0;i<5;i++){
        new_arr[i]= arr[4-i];
    }
    for(int i = 0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}