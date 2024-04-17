/*
Print the pattern
1
2 4
3 5 7
6 8 10 12
9 11 13 15 17
*/

#include <stdio.h>

int main() {
    int n = 1;
    for(int i=1; i<=5; i++) {
        int temp = n;
        for(int j=1; j<=i; j++) {
            printf("%d ", n);
            n += 2;
        }
        printf("\n");
        n = temp + 1;
    }
}