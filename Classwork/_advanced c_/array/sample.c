#include <stdio.h>

void main() {
    int a, c;
    scanf("%d", &a);
    for (c=0;c<=100;c+=10){
         printf("%d x %d = %d\n",a, c, a*c);
    }
}