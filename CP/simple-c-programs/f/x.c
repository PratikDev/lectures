#include <stdio.h>

int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    int isalphabet, isAdigit, isSpecialChar;

    isalphabet = isalpha(c);
    isAdigit = isdigit(c);
    isSpecialChar = ispunct(c);

    if (isalphabet)
    {
        printf("%c is an alphabet.\n", c);
    }
    else if (isAdigit)
    {
        printf("%c is a digit.\n", c);
    }
    else if (isSpecialChar)
    {
        printf("%c is a special character.\n", c);
    }
    else
    {
        printf("%c is not an alphabet, digit or special character.\n", c);
    }
}