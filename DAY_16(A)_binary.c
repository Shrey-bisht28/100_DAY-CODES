//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

int main() {
    int num;
    int binary[32];  // to store binary digits (assuming 32-bit integer)
    int i = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    int n = num;
    if (num < 0) {
        printf("Binary representation of negative numbers is implementation-dependent.\n");
        num = -num;  
    }

    while (num > 0) {
        binary[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary representation of %d is: ", n);
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
