/* Write a program to calculate a bill for internet browsing. 
The conditions are givenbelow: 
Minimum Rs. 200 for up to 100 calls.
Plus, Rs. 0.60 per call for the next 50 calls. 
Plus, Rs. 0.50 per call for the next 50 calls.
Plus, Rs. 0.40 per call for any call beyond 200 calls */

#include <stdio.h> 

int main() {
    int totalCalls, billAmount = 0;

    printf("Enter the total number of calls: ");
    scanf("%d", &totalCalls);

    switch (totalCalls) {
        case 0 ... 100:
            billAmount = 200;
            break;
        case 101 ... 150:
            billAmount = 200 + (totalCalls - 100) * 60;
            break;
        case 151 ... 200:
            billAmount = 200 + 50 * 60 + (totalCalls - 150) * 50;
            break;
        default:
            billAmount = 200 + 50 * 60 + 50 * 50 + (totalCalls - 200) * 40;
    }

    printf("Total bill amount: Rs. %d\n", billAmount);
}