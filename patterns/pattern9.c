/*Print the pattern 

* * * * *
*       *
*       *
*       *
* * * * *

*/

#include <stdio.h>

int main() {
    int i, j, k, m=1;

    for(i=1; i<=5; i++) {
        if (i==1 || i==5) {
            for(j=1; j<=5; j++) {
                printf("* ");
            }
        }
        else {
            printf("*       *");
        }
        printf("\n");
    }
}