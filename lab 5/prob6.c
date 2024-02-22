/* Write a program to calculate an amount of a telephone 
bill for the following criteria. (Without Loop)
Calls charge per call (Rs.)
1-150 0
151-250 .9
251-400 1.2
401 onwards 1.5 */

#include <stdio.h>

int main() {
    int totalCalls;
    float billAmount;

    printf("Enter the total number of calls: ");
    scanf("%d", &totalCalls);

    if (totalCalls >= 1 && totalCalls <= 150) {
        billAmount = totalCalls * 0;
    } else if (totalCalls <= 250) {
        billAmount = 150 * 0 + (totalCalls - 150) * 0.9;
    } else if (totalCalls <= 400) {
        billAmount = 150 * 0 + 100 * 0.9 + (totalCalls - 250) * 1.2;
    } else {
        billAmount = 150 * 0 + 100 * 0.9 + 150 * 1.2 + (totalCalls - 400) * 1.5;
    }

    printf("Telephone bill amount: Rs. %.2f\n", billAmount);
}
