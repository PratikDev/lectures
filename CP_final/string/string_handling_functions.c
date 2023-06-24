#include <stdio.h>
#include <string.h>

void stringLength() {
    char str[] = "Hello, World!";
    int length = strlen(str);
}

void stringComparison() {
    char str1[] = "Hello";
    char str2[] = "World";
    int result = strcmp(str1, str2);
}

void stringConcatenation() {
    char str1[50] = "Hello";
    char str2[] = ", World!";
    strcat(str1, str2);
}

void stringCopy() {
    char str1[50] = "Hello";
    char str2[50];
    strcpy(str2, str1);
}

void stringReverse() {
    char str[] = "Hello, World!";
    strrev(str);
}

int main() {
    /* Call the respective functions as needed */

    // stringLength();
    // stringComparison();
    // stringConcatenation();
    // stringCopy();
    // stringReverse();

    return 0;
}
