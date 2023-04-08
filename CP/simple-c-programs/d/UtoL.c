#include <stdio.h>

int main()
{
    char c;

    printf("Enter an uppercase alphabet: ");
    scanf("%c", &c);

    c = c + 32;

    printf("The lowercase equivalent is: %c", c);

    return 0;
}
