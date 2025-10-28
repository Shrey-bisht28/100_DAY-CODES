//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n, i;
    float numerator = 1, denominator = 2, sum = 0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;     // numerator increases by 2
        denominator += 2;   // denominator increases by 2
    }

    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}
