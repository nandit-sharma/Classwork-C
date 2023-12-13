#include <stdio.h>
void display(int);
void main() {
    int limit;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    display(limit);
}
void display(int num){
    if (num){
        display(num-1);
    }else{
        return;
    }
    printf("\n%d\n", num);
}