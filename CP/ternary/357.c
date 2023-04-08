#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    (number % 3 == 0)
        ? printf("%d is divisible by 3", number)
        : printf("%d is not divisible by 3", number);

    (number % 5 == 0)
        ? printf("%d is divisible by 5", number)
        : printf("%d is not divisible by 5", number);

    (number % 7 == 0)
        ? printf("%d is divisible by 7", number)
        : printf("%d is not divisible by 7", number);

    // check if number is divisible by 3 or 5 or 7
    (number % 3 == 0 || number % 5 == 0 || number % 7 == 0)
        ? printf("%d is divisible by 3, 5 or 7", number)
        : printf("%d is not divisible by 3, 5 or 7", number);

    return 0;
}