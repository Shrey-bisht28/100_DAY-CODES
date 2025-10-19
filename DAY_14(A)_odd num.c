//Write a program to print the sum of the first n odd numbers.
#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the number of odd numbers to sum
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Sum of first n odd numbers
    for (int i = 1; i <= 2 * n; i += 2) {
        sum += i;
    }

    printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;
}
