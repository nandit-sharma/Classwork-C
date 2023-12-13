#include <stdio.h>

int main() {
    int r, n=0, s;
    printf("Enter the range number: ");
    scanf("%d", &r);

    for(n; n <= r; n++){
        s += n;
    }

    return 0;
}