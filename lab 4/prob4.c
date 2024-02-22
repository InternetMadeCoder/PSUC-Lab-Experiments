// Write a program to find the total no. of days for a given number of months countingfrom January month.

#include <stdio.h>

int main() {
    int months, totalDays;

    printf("Enter the number of months: ");
    scanf("%d", &months);

    if (months == 1 || months == 3 || months == 5 || months == 7 || months == 8 || months == 10 || months == 12) {
        totalDays = 31;
    } else if (months == 4 || months == 6 || months == 9 || months == 11) {
        totalDays = 30;
    } else if (months == 2) {
        totalDays = 28;  // Assuming a non-leap year
    } else {
        printf("Invalid input for months.\n");
        return 1;
    }

    printf("Total number of days for %d months: %d days\n", months, totalDays);

    return 0;
}
