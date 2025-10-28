/* Write a program to print the following pattern:
    5
   45
  345
 2345
12345 */
#include <stdio.h>

int main() {
    int i, j, n = 5, space;

    
    for (i = n; i >= 1; i--) {
        
        for (space = 1; space < i; space++) {
            printf(" ");
        }
        
        for (j = i; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
