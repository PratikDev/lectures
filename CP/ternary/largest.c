#include <stdio.h>

int main()
{
    int a = 10;
    int b = 20;
    int c = 15;

    (a > b && a > c)   ? printf("a is greater")
    : (b > a && b > c) ? printf("b is greater")
                       : printf("c is greater");

    return 0;
}