/*Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

* */
  #include <stdio.h>

int main() {
    // First group (4 stars)
    for(int i = 0; i < 4; i++) {
        printf("*\n");
    }
    printf("\n"); // Blank line between groups

    // Second group (5 stars)
    for(int i = 0; i < 5; i++) {
        printf("*\n");
    }
    printf("\n"); // Blank line between groups

    // Third group (3 stars)
    for(int i = 0; i < 3; i++) {
        printf("*\n");
    }
    printf("\n"); // Blank line between groups

    // Fourth group (1 star)
    printf("*\n");

    return 0;
}
