/* Write a program to print the following pattern:
*****
 ****
  ***
   **
    * */
#include <stdio.h>

int main() {
    int i, j, space;
    int n = 5; // number of rows

    // Outer loop for rows
    for (i = 0; i < n; i++) {
        // Print leading spaces
        for (space = 0; space < i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = i; j < n; j++) {
            printf("*");
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}

