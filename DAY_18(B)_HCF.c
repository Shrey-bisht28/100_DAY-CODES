//Write a program to find the HCF (GCD) of two numbers.
#include <stdio.h>

int main() {
    int num1, num2, a, b, temp;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Assign absolute values to handle negative inputs
    a = (num1 > 0) ? num1 : -num1;
    b = (num2 > 0) ? num2 : -num2;

    // Euclidean algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF (GCD) of %d and %d is %d\n", num1, num2, a);

    return 0;
}
