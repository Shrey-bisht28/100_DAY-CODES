//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>

int main() {
    char operator;
    int num1, num2;
    int result;
    float divisionResult;

    // Input numbers and operator
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  // space before %c to consume any leftover newline
    printf("Enter second integer: ");
    scanf("%d", &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is undefined.\n");
            } else {
                divisionResult = (float)num1 / num2;
                printf("Result: %d / %d = %.2f\n", num1, num2, divisionResult);
            }
            break;

        case '%':
            if (num2 == 0) {
                printf("Error: Modulus by zero is undefined.\n");
            } else {
                result = num1 % num2;
                printf("Result: %d %% %d = %d\n", num1, num2, result);
            }
            break;

        default:
            printf("Invalid operator! Please use +, -, *, /, or %%.\n");
    }

    return 0;
}
