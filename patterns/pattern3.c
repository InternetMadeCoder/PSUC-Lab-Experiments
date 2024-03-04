/*Print the pattern 

     *
    **
   ***
  ****
 *****

*/

#include <stdio.h>

int main() {
    int i, j, k, m=1;

    for(i=5; i>0; i--) { // no. of rows
        for(j=i; j>0; j--) { // no. of spaces
            printf("  ");
        }
        for(k=1; k<=m; k++) { // no. of stars
            printf("* ");
        }
        m++;
        printf("\n");
    }
}