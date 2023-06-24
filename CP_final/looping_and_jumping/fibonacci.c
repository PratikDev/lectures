#include <stdio.h>

void generateFibonacci(int n) {
    int first = 0;
    int second = 1;
    int next;

    printf("Fibonacci sequence up to %d terms: ", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }

        printf("%d ", next);
    }

    printf("\n");
}

int main() {
    int numTerms;

    printf("Enter the number of Fibonacci terms to generate: ");
    scanf("%d", &numTerms);

    generateFibonacci(numTerms);

    return 0;
}
