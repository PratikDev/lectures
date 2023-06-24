#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory for n integers
    ptr = (int*)malloc(n * sizeof(int));

    // Check if memory allocation is successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    // Initialize array elements with user input values
    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    // Print array elements
    printf("Array elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    // Release dynamically allocated memory
    free(ptr);
    ptr = NULL;

    return 0;
}