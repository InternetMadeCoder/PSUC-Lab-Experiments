/* Write a program to calculate the amount of an 
electricity bill for the followingcriteria.
(Without Loop)
Units charge per unit (Rs.)
First, 1-100 up to 0
Next, 101-200 up to 1.5
Next, 201-400 up to 2.5
401 onwards 3.5 */

#include <stdio.h>

int main() {
    int units;
    float billAmount;

    printf("Enter the number of units: ");
    scanf("%d", &units);

    if (units >= 1 && units <= 100) {
        billAmount = units * 0;
    } else if (units <= 200) {
        billAmount = 100 * 0 + (units - 100) * 1.5;
    } else if (units <= 400) {
        billAmount = 100 * 0 + 100 * 1.5 + (units - 200) * 2.5;
    } else {
        billAmount = 100 * 0 + 100 * 1.5 + 200 * 2.5 + (units - 400) * 3.5;
    }

    printf("Electricity bill amount: Rs. %.2f\n", billAmount);
}
