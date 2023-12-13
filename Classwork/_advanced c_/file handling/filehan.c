#include <stdio.h>

void main() {
    char n[20];
    FILE *fil1;
    fil1=fopen("file.txt","w");
    printf("Enter your name: ");
    scanf("%c", &n);
    fprintf(fil1, "Hello %c, whats up ?\n", n);
    fclose(fil1);
    printf("Done");
}