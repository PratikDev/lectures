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

    operator== '+' ? printf("%f + %f = %f", num1, num2, result = num1 + num2)
    :
    operator== '-' ? printf("%f - %f = %f", num1, num2, result = num1 - num2)
    :
    operator== '*' ? printf("%f * %f = %f", num1, num2, result = num1 * num2)
    :
    operator== '/' ? num2 == 0 ? printf("Error: Divide by zero")
                               : printf("%f / %f = %f", num1, num2, result = num1 / num2)
                   : printf("Error: Invalid operator");

    return 0;
}
