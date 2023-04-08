#include <stdio.h>

int main()
{
    char operator;
    float num1, num2, result;

    // printf() displays the formatted output
    printf("Enter an operator (+, -, *, /): ");

    // scanf() reads the formatted input and stores them
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // switch statement evaluates the expression once
    switch (operator)
    {

    // if operator is +
    case '+':
        result = num1 + num2;
        printf("%f + %f = %f", num1, num2, result);
        break;

    // if operator is -
    case '-':
        result = num1 - num2;
        printf("%f - %f = %f", num1, num2, result);
        break;

    // if operator is *
    case '*':
        result = num1 * num2;
        printf("%f * %f = %f", num1, num2, result);
        break;

    // if operator is /
    case '/':

        // if user enters 0 as second number
        if (num2 == 0)
        {
            printf("Error: Divide by zero");
        }
        else
        {
            result = num1 / num2;
            printf("%f / %f = %f", num1, num2, result);
        }
        break;

    // if operator doesn't match any case constant
    default:
        printf("Error: Invalid operator");
        break;
    }

    return 0;
}