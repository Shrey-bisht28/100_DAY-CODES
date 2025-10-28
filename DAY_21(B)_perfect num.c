//Write a program to check if a number is a perfect number.
#include <stdio.h>

int main() {
    int num, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Find all divisors and add them
    for (i = 1; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }

    // Check if the sum of divisors equals the number
    if (sum == num)
        printf("%d is a perfect number.\n", num);
    else
        printf("%d is not a perfect number.\n", num);

    return 0;
}
