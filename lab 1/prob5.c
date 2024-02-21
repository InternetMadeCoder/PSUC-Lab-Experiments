// To check whether the given number is lesser than 10 or not. 
#include <stdio.h>

int main() {
    int num;
    printf("Enter a num : ");
    scanf("%d", &num);

    if(num<10) {
        printf("%d is less than 10.", num);
    } else {
        printf("%d is greater than 10.", num);
    }
}