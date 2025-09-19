#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    printf("Simple Calculator\n");
    printf("-----------------\n");
    printf("Available operations: +  -  *  /\n");

    // Input first number
    printf("Enter first number: ");
    if (scanf("%lf", &num1) != 1) {
        printf("Invalid input for number.\n");
        return 1;
    }

    // Input operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);  // Notice the space before %c

    // Input second number
    printf("Enter second number: ");
    if (scanf("%lf", &num2) != 1) {
        printf("Invalid input for number.\n");
        return 1;
    }

    // Perform the calculation
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1;
            }
            result = num1 / num2;
            printf("Result: %.2lf\n", result);
            break;

        default:
            printf("Invalid operator.\n");
            return 1;
    }

    return 0;
}
