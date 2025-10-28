/* Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   * */
#include <stdio.h>

int main() {
    int i, j;
    int n = 4; // Number of rows in the top half (including middle row)

    // Top half of the diamond
    for(i = 1; i <= n; i++) {
        // Print leading spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom half of the diamond
    for(i = n-1; i >= 1; i--) {
        // Print leading spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for(j = 1; j <= 2*i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
