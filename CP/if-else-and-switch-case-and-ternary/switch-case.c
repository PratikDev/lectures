#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;

    int c = a > b;

    switch (c)
    {
    case 1:
        printf("a is greater than b");
        break;

    case 0:
        printf("b is greater than a");
        break;

    default:
        printf("Invalid choice!");
        break;
    }

    return 0;
}