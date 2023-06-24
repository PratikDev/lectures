#include<stdio.h>
#include<ctype.h>

int main() {
    char ch = 'a';
    char uppercase = toupper(ch);
    char lowercase = tolower(ch);

    printf("Upper: %c\n", uppercase);
    printf("Lower: %c\n", lowercase);
    
    return 0;
}