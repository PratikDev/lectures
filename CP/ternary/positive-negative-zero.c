#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    (number > 0)
        ? printf("%d is positive", number)
    : (number < 0)
        ? printf("%d is negative", number)
        : printf("%d is zero", number);
}