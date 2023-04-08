#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    /*
     a = 2;
     b = 3;


     a = 2 + 3 = 5;
     b = 5 - 3 = 2;
    */

    a = a + b;

    b = a - b; /* b = (a + b) - b;
                b = a */

    a = a - b; /* a = (a + b) - b;
                a = a + b - a;
                a = b */

    printf("After swapping, a = %d and b = %d", a, b);

    return 0;
}
