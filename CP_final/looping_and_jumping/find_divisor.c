#include <stdio.h>

void findDivisors(int number) {
    printf("Divisors of %d: ", number);
    
    // Iterate through all possible values up to the given number
    for (int i = 1; i <= number; i++) {
        // Check if the current value is a divisor
        if (number % i == 0) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
}

int main() {
    int number;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    findDivisors(number);
    
    return 0;
}
