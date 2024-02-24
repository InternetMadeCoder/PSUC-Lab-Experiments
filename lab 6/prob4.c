/* Write a program to convert the decimal number into
binary to decimal. Ex: 1101 = 1*2^3 + 1 * 2^2 + 0 * 2^1
+ 1* 2^0 = 13 */

#include <stdio.h>

int decimalToBinary(int decimalNumber) {
    int binaryNumber = 0;
    int remainder, base = 1;

    while (decimalNumber > 0) {
        remainder = decimalNumber % 2;
        binaryNumber += remainder * base;
        decimalNumber /= 2;
        base *= 10;
    }

    return binaryNumber;
}

int binaryToDecimal(int binaryNumber) {
    int decimalNumber = 0; 
    int remainder, base = 1;

    while (binaryNumber > 0) {
        remainder = binaryNumber % 10;
        decimalNumber += remainder * base;
        binaryNumber /= 10;
        base *= 2;
    }

    return decimalNumber;
}


int main() {
    int decimalNumber, binaryNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);
    printf("%d = %d \n", decimalNumber, decimalToBinary(decimalNumber));


    printf("Enter a binary number: ");
    scanf("%d", &binaryNumber);
    printf("%d = %d", binaryNumber, binaryToDecimal(binaryNumber));
}