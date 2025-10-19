//Write a program to print the product of even numbers from 1 to n.
#include <stdio.h>

int main() {
    int n;
    unsigned long long product = 1; // Use long long to handle larger products
    int foundEven = 0; 

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        product *= i;
        foundEven = 1;
    }

    if (foundEven) {
        printf("Product of even numbers from 1 to %d = %llu\n", n, product);
    } else {
        printf("No even numbers in the range 1 to %d.\n", n);
    }

    return 0;
}
