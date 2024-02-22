/* Write a program to calculate the discount in rupees for 
the following criterion. (Without Loop)
Cost price discount
>=800 25%
500-800 20%
<500 no discount (0%) */

#include <stdio.h>

int main() {
    float costPrice, discountAmount;

    printf("Enter the cost price: Rs. ");
    scanf("%f", &costPrice);

    if (costPrice >= 800) {
        discountAmount = 0.25 * costPrice;
    } else if (costPrice >= 500) {
        discountAmount = 0.20 * costPrice;
    } else {
        discountAmount = 0;
    }
    printf("Discount amount: Rs. %.2f\n", discountAmount);
}