#include <stdio.h>

int reverseNumber(int number) {
    int reversedNumber = 0;

    while (number != 0) {
        reversedNumber = reversedNumber * 10 + number % 10;
        number /= 10;
    }

    return reversedNumber;
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int reversedNumber = reverseNumber(number);

    printf("Reversed: %d\n", reversedNumber);

    return 0;
}
