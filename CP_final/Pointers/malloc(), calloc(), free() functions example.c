#include <stdio.h>
#include <stdlib.h>

int main() {
    // allocate memory using malloc() function
    int *ptr1 = (int*) malloc(sizeof(int));
    // check if memory is allocated
    if (ptr1 == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    }
    // store value in the allocated memory
    *ptr1 = 25;
    // print the value
    printf("Value stored in ptr1 = %d\n", *ptr1);

    // allocate memory using calloc() function
    int *ptr2 = (int*) calloc(1, sizeof(int));
    // check if memory is allocated
    if (ptr2 == NULL) {
        printf("Memory allocation failed\n");
        free(ptr1);  // free previously allocated memory
        return -1;
    }
    // store value in the allocated memory
    *ptr2 = 50;
    // print the value
    printf("Value stored in ptr2 = %d\n", *ptr2);

    // free the allocated memory
    free(ptr1);
    free(ptr2);

    return 0;
}