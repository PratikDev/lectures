#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (isalpha(c))
    {
        printf("%c is an alphabet.\n", c);
    }
    else
    {
        printf("%c is not an alphabet.\n", c);
    }

    return 0;
}
