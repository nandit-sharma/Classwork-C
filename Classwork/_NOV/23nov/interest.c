#include <stdio.h>

void main() {
    float principalamount;
    int numberofyears;
    printf("Enter the loan amount: ");
    scanf("%f", &principalamount);
    printf("Enter the number of years: ");
    scanf("%d", &numberofyears);
    float rateofinterest;
    if (principalamount >= 10000) {
        rateofinterest = 0.20;
    } else if (principalamount >= 8000 && principalamount < 10000) {
        rateofinterest = 0.18;
    } else {
        rateofinterest = 0.16;
    }
    float interest = principalamount * rateofinterest * numberofyears;
    printf("\nInterest: %f%%", rateofinterest*100);  
    printf("\nYears: %d", numberofyears);
    printf("\nInterest: +%.2f", interest);
    printf("\n\nThe total amount to be paid is: %.2f\n", interest + principalamount);
}