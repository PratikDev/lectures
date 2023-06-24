#include <math.h>
#include <stdio.h>

float calculateSD(float data[], int size) {
    float sum = 0.0, mean, SD = 0.0;
    int i;

    for (i = 0; i < size; ++i) {
        sum += data[i];
    }

    mean = sum / size;

    for (i = 0; i < size; ++i) {
        SD += pow(data[i] - mean, 2);
    }

    return sqrt(SD / size);
}


int main() {
    int i, size;
    float data[10];

    printf("Enter array size: ");
    scanf("%d", &size);

    printf("Enter %d elements: ", size);
    for (i = 0; i < size; ++i) scanf("%f", &data[i]);

    printf("\nStandard Deviation = %.6f\n", calculateSD(data, size));

    return 0;
}