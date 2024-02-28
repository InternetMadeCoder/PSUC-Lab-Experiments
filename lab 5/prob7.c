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
    float charge = 0.0;

    printf("Enter the number of units: ");
    scanf("%d", &units);

    switch(units / 100) {
        case 0:
            charge = 0.0;
            break;
        case 1:
            charge = 1.5;
            break;
        case 2:
            charge = 2.5;
            break;
        default:
            charge = 3.5;
            break;
    }

    float totalAmount = units * charge;

    printf("Number of units: %d\n", units);
    printf("Charge per unit (Rs.): %.2f\n", charge);
    printf("Total amount: Rs. %.2f\n", totalAmount);
}