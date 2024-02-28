/* Write a program to calculate an amount of a telephone 
bill for the following criteria. (Without Loop)
Calls charge per call (Rs.)
1-150 0
151-250 .9
251-400 1.2
401 onwards 1.5 */

#include <stdio.h>

int main() {
    int calls;
    float charge = 0.0;

    printf("Enter the number of calls: ");
    scanf("%d", &calls);

    switch (calls) {
        case 1 ... 150:
            charge = 0.0;
            break;
        case 151 ... 250:
            charge = 0.9;
            break;
        case 251 ... 400:
            charge = 1.2;
            break;
        default:
            charge = 1.5;
            break;
    }

    float totalAmount = calls * charge;

    printf("Number of calls: %d\n", calls);
    printf("Charge per call (Rs.): %.2f\n", charge);
    printf("Total amount: Rs. %.2f\n", totalAmount);
}