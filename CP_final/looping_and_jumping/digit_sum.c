#include <stdio.h>

int sumOfDigits(int number) {
    int sum = 0;

    while (number != 0) {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }

    return sum;
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    int digitSum = sumOfDigits(number);

    printf("Sum of digits: %d\n", digitSum);

    return 0;
}
