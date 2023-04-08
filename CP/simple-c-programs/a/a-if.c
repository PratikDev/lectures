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

    if (operator== '+') // if operator is summation
    {
        result = num1 + num2;

        printf("%f + %f = %f", num1, num2, result); // 2 + 3 = 5
    }
    else if (operator== '-') // if operator is subtraction
    {
        result = num1 - num2;

        printf("%f - %f = %f", num1, num2, result); // 5 - 3 = 2
    }
    else if (operator== '*') // if operator is multiplication
    {
        result = num1 * num2;

        printf("%f * %f = %f", num1, num2, result); // 2 * 3 = 6
    }
    else if (operator== '/') // if operator is division
    {
        if (num2 == 0) // if user enters 0 as second number
        {
            printf("Error: Divide by zero");
        }
        else
        {
            result = num1 / num2;

            printf("%f / %f = %f", num1, num2, result); // 6 / 3 = 2
        }
    }
    else // if operator doesn't match any case constant
    {
        printf("Error: Invalid operator");
    }

    return 0;
}

/*

6 / 0 = 3

*/