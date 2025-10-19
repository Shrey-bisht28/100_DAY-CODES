//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int num, digit;
    unsigned long long product = 1;
    int foundOdd = 0;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative number by taking absolute value
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        digit = num % 10;
        if (digit % 2 != 0) { // Check if digit is odd
            product *= digit;
            foundOdd = 1;
        }
        num /= 10;
    }

    if (foundOdd) {
        printf("Product of odd digits = %llu\n", product);
    } else {
        printf("No odd digits found in the number.\n");
    }

    return 0;
}
