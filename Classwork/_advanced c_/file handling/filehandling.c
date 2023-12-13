#include <stdio.h>

void main() {
    char n[20];
    FILE *fil1;
    fil1=fopen("file.txt","w");
    fprintf(fil1, "Hello , whats up ?\n");
    fclose(fil1);
    fil1 = fopen("file.txt", "r");
    char c = fgetc(fil1);
    while (c != EOF) {
        printf("%c", c);
        c = fgetc(fil1);
    }
    fclose(fil1);
}