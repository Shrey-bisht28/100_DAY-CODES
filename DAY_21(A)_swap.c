//Write a program to swap the first and last digit of a number.
#include <stdio.h>
int main() {
    int num, firstDigit, lastDigit, digits, swappedNum, middlePart;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    lastDigit = num % 10;

    // Count the number of digits
    digits = (int)log10(num);

    firstDigit = num / (int)pow(10, digits);

    // Remove first and last digit from the number
    middlePart = (num % (int)pow(10, digits)) / 10;

    // Construct the new number with swapped digits
    swappedNum = lastDigit * (int)pow(10, digits) + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
