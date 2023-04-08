#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 15;

    (a < b && a < c)   ? printf("a is smaller")
    : (b < a && b < c) ? printf("b is smaller")
                       : printf("c is smaller");

    return 0;
}