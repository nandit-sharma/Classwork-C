#include <stdio.h>
int main() {
    int i,remainder, quotient, start, sum=0, end;
    printf("Enter the starting value: ");
    scanf("%d", &start);
    printf("Enter the end value: ");
    scanf("%d", &end);
    for (i=start; i<end; i++) {
        int x = 0, q = i;
        while (q >= 0){
            q/=10;
            x+=1;
        }
    printf("\n%d ", x);
    }

    return 0;
}