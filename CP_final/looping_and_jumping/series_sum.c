#include <stdio.h>

double calculateSeriesSum(int n) {
    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        // Calculate each term of the series and add it to the sum
        double term = 1.0 / i;
        sum += term;
    }

    return sum;
}

int main() {
    int numTerms;

    printf("Enter the number of terms in the series: ");
    scanf("%d", &numTerms);

    double seriesSum = calculateSeriesSum(numTerms);

    printf("Sum of the series: %.2f\n", seriesSum);

    return 0;
}
