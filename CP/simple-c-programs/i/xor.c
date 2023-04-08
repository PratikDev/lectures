#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    /*
    a = 4;
    b = 5;



    0 1 0 0  --> initial a
    0 1 0 1  --> initial b
    -------
    0 0 0 1  --> new value of a [ a^b ]
    0 1 0 1  --> initial b
    -------
    0 1 0 0  --> new value of b [ (a^b) ^ b ], which is equal to initial a
    0 0 0 1  --> new value of a
    -------
    0 1 0 1  --> new value of a [ (a^b) ^ a], which is equal to initial b

    */

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swapping, a = %d and b = %d", a, b);

    return 0;
}
