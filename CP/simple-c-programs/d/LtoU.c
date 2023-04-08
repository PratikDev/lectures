#include <stdio.h>

int main()
{
    char c;

    printf("Enter an lowercase alphabet: ");
    scanf("%c", &c);

    printf("The uppercase equivalent is: %c", toupper(c));

    return 0;
}
