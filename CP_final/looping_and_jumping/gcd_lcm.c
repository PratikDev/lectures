#include <stdio.h>

int gcd(int a, int b) {
    // Base case: if one of the numbers is 0, return the other number
    if (b == 0) {
        return a;
    }

    // Recursive case: compute the GCD using the Euclidean algorithm
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    // Compute the LCM using the formula: LCM = (a * b) / GCD(a, b)
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    int gcdResult = gcd(num1, num2);
    int lcmResult = lcm(num1, num2);

    printf("GCD of %d and %d is %d\n", num1, num2, gcdResult);
    printf("LCM of %d and %d is %d\n", num1, num2, lcmResult);

    return 0;
}
