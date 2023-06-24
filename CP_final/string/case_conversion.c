#include <stdio.h>
#include <ctype.h>
#include <string.h>

void convertToUpper(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        str[i] = toupper(str[i]);
    }
}

void convertToLower(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char str[] = "Hello, World!";
    
    convertToUpper(str);
    printf("Uppercase string: %s\n", str);

    convertToLower(str);
    printf("Lowercase string: %s\n", str);

    return 0;
}
