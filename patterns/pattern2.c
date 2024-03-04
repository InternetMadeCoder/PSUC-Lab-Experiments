/*Print the pattern

*****
****
***
**
*

*/

#include <stdio.h>

int main() {
    int i, j;
    
    for(i=5; i>0; i--) { // no. of rows
        for(j=i; j>0; j--) { // no. of stars
            printf("* ");
        }
        printf("\n");
    }
}