#include <stdio.h>


int max(int a, int b, int c, int d){
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (d > max) {
        max = d;
    }
    return max;

}
int main(){
    int num1, num2, num3, num4;
    printf("Enter 4 numbers: ");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    int largest = max(num1, num2, num3, num4);
    printf("Largest number is %d\n", largest);
}