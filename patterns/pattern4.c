/*Print the pattern

*****
 ****
  ***
   **
    *

*/

#include <stdio.h>

int main() {
    int i, j, k, m=1;

    for(i=5; i>0; i--) { // no. of rows
        for(j=1; j<=m; j++) { // no. of spaces
            printf("  ");
        }
        m++;

        for(k=i; k>0; k--) { // no. of stars
            printf("* ");
        } 
        printf("\n");
    }
}