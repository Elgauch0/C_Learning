#include <stdio.h>

int main()
{

    double num1 = 0.0, num2 = 0.0, result = 0.0;
    char oprator = '\0';
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &oprator);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    switch (oprator)
    {
    case '+':
        result = num1 + num2;

        break;
    case '-':
        result = num1 - num2;

        break;
    case '*':
        result = num1 * num2;

        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            printf("Error: Division by zero is not allowed.\n");
            return 1;
        }
        break;
    default:
        printf("Error: Invalid operator.\n");
        return 1;
    }
    printf("%.2lf %c %.2lf = %.2lf\n", num1, oprator, num2, result);
    return 0;
}