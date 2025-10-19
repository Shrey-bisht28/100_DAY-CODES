//Write a program to check if a number is a palindrome.
#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    // Handle negative numbers by considering their absolute value
    if (num < 0) {
        num = -num;
        original = num;
    }

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    // Check if palindrome
    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
