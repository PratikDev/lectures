#include <stdio.h>
#include <math.h>

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int numDigits = floor(log10(abs(number))) + 1;

    printf("Number of digits: %d\n", numDigits);

    return 0;
}
