#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (ispunct(c))
    {
        printf("%c is a special character.\n", c);
    }
    else
    {
        printf("%c is not a special character.\n", c);
    }

    return 0;
}
