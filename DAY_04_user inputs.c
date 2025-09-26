//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main() {
    int n, sum;

    // Input the value of n
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Check if the input is valid
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with error
    }

    // Calculate the sum using the formula: sum = n * (n + 1) / 2
    sum = n * (n + 1) / 2;

    // Display the result
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}
