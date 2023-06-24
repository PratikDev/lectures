#include <stdio.h>

int main() {
    int array[11] = {5, 2, 9, 2, 7, 3, 8, 4, 6, 10, 55}, size = sizeof(array) / sizeof(array[0]);
    int min, max;

    max = min = array[0];
    while (--size) {
        if (array[size] < min)
            min = array[size];
        if (array[size] > max)
            max = array[size];
    }

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}
