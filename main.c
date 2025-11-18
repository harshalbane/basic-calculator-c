#include <stdio.h>

int main() {
    char op;
    double a, b, result;

    printf("Enter operator (+ - * /): ");
    scanf("%c", &op);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    if (op == '+')
        result = a + b;
    else if (op == '-')
        result = a - b;
    else if (op == '*')
        result = a * b;
    else if (op == '/')
        result = a / b;
    else {
        printf("Invalid operator");
        return 0;
    }

    printf("Result: %.2lf", result);
    return 0;
}
