#include <stdio.h>

int main() {
    int i, a, b, c, x, y, armstrong;
    printf("Three digit armstrong numbers are:\n");
    for (i=100; i<1000; i++) {
        a = i%10;
        x = i/10;

        b = x%10;
        y = x/10;

        c = y;
        a = a*a*a;
        b = b*b*b;
        c = c*c*c;

        armstrong = a+b+c;
        if (armstrong == i){
            printf("%d\n", armstrong);
        }
    }

    return 0;
}