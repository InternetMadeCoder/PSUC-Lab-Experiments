/* Write a program to calculate the discount in rupees for 
the following criterion. (Without Loop)
Cost price discount
>=800 25%
500-800 20%
<500 no discount (0%) */

#include <stdio.h>

int main() {
    float costPrice, discount = 0.0;

    printf("Enter the cost price: ");
    scanf("%f", &costPrice);

    switch ((int)costPrice) {
        case 800 ... 999:
            discount = 0.25;
            break;
        case 500 ... 799:
            discount = 0.20;
            break;
        default:
            discount = 0.0;
            break;
    }

    float discountInR = costPrice * discount;

    printf("Cost price: Rs. %.2f\n", costPrice);
    printf("Discount rate: %.2f%%\n", discount * 100);
    printf("Discount in rupees: Rs. %.2f\n", discountInR);
}
