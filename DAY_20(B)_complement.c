//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>
#include <string.h>

int main() {
    char binary[65]; // to hold up to 64-bit binary number + '\0'

    // Input binary number as string
    printf("Enter a binary number: ");
    scanf("%s", binary);

    int length = strlen(binary);

    // Compute 1's complement by flipping bits
    for (int i = 0; i < length; i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        } else {
            printf("Invalid input! Please enter only 0s and 1s.\n");
            return 1; // Exit with error
        }
    }

    printf("1's complement: %s\n", binary);

    return 0;
}
