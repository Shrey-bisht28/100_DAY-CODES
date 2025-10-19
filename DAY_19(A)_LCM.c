//Write a program to find the LCM of two numbers.
#include <stdio.h>

// Function to find GCD using Euclidean algorithm
int gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, hcf, lcm;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Get absolute values to handle negative inputs
    int a = (num1 > 0) ? num1 : -num1;
    int b = (num2 > 0) ? num2 : -num2;

    hcf = gcd(a, b);
    lcm = (a / hcf) * b;  // To avoid overflow

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
