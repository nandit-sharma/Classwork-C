#include <stdio.h>
#include <string.h>

int main() {
    char str[20], str1[20];
    int length, res;

    printf("\nEnter the first string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove the trailing newline character

    printf("\nEnter the second string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';  // Remove the trailing newline character

    length = strlen(str);
    printf("Length of the first string is: %d\n", length);

    printf("The concatenation of two strings is %s\n", strcat(str, str1));

    res = strcmp(str, str1);
    printf("Compared string result is: %d\n", res);
    printf("The copied string is: %s\n", strcpy(str, str1));

    return 0;
}

