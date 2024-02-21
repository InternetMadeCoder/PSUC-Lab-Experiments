// Write a program to convert the time in seconds to hours, minutes, and seconds. (1 hr=3600 sec).

#include <stdio.h>

int main() {
    int hours, seconds, minutes;
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    hours = seconds / 3600;
    seconds %= 3600;

    minutes = seconds / 60;
    seconds %= 60;

    printf("Time in HH:MM:SS format is %02d:%02d:%02d\n", hours, minutes, seconds);
}