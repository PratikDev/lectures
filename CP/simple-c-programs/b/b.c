#include <stdio.h>

int main()
{
    float num1, num2, num3, num4, num5, average;

    // printf() displays the formatted output
    printf("Enter five numbers: ");

    // scanf() reads the formatted input and stores them
    scanf("%f %f %f %f %f", &num1, &num2, &num3, &num4, &num5);

    // calculate average
    average = (num1 + num2 + num3 + num4 + num5) / 5;

    printf("The average is: %f", average);

    return 0;
}
