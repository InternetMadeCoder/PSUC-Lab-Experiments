/*Print the pattern

    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *

*/

#include <stdio.h>

int main() {
    int i, j, k, m=1;

    
    for(i=5; i>0; i--) {
        for (j=i; j>0; j--) {
            printf(" ");
        } 
        for (k=1; k<=m; k++) {
            printf("* ");
        }
        m++;
        printf("\n");
    }

    m=4; 
    for(i=1; i<=4; i++) {
        for(j=1; j<=i; j++) {
            printf(" ");
        }
        for(k=1; k<=m; k++) {
            printf(" *");
        }
        m--;
        printf("\n");
    }
}