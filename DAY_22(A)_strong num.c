//Write a program to check if a number is a strong number.
#include <stdio.h>
int factorial(int n) {
    int fact = 1, i;
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Calculate sum of factorials of digits
    while (temp > 0) {
        rem = temp % 10;
        sum += factorial(rem);
        temp /= 10;
    }

    // Check if the number is Strong
    if (sum == num)
        printf("%d is a Strong number.\n", num);
    else
        printf("%d is not a Strong number.\n", num);

    return 0;
}
