/* Write a program to print the following pattern:
*****
 ****
  ***
   **
    * */
#include <stdio.h>

int main() {
    int i, j, space;
    int n = 5; 

   
    for (i = 0; i < n; i++) {
        // Print leading spaces
        for (space = 0; space < i; space++) {
            printf(" ");
        }
        
        for (j = i; j < n; j++) {
            printf("*");
        }
        printf("\n"); 
    }

    return 0;
}

