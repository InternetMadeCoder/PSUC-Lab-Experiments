// To calculate simple interest.
#include <stdio.h>

int main() {
    int P, R, T, SI;

    printf("Enter principal, rate, time: ");
    scanf("%d %d %d", &P, &R, &T);

    SI = (P*R*T)/100;

    printf("Simple Interest = %d", SI);
}