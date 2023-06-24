#include <stdio.h>

void reverseArray(int *arr, int size) {
    int *start, *end;
    start = arr;                // pointer at start of array
    end = arr + size - 1;       // pointer at end of array

    while (start < end) {
        int temp = *start;      // swap values at pointers
        *start = *end;
        *end = temp;

        // move pointers towards each other
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    reverseArray(arr, size);

    printf("\nReversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
