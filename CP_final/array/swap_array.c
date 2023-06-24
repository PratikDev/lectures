#include<stdio.h>

void swap_arrays(int *y, int *z, int size)
{
    int x,temp;

    for(x=0; x<size; x++)
    {
        y[x] = y[x]^z[x];
        z[x] = y[x]^z[x];
        y[x] = y[x]^z[x];
    }
}

void print_array_elements(int *y, int *z, int size) {
    int i;

    printf("\nArray1 = ");
    for(i = 0; i<size; i++) printf("%d ", y[i]);

    printf("\nArray2 = ");
    for(i = 0; i<size; i++) printf("%d ", z[i]);
}

int main() {
    int i, a[100], b[100], size;
    
    printf("array size: ");
    scanf("%d", &size); // getting array size

    printf("enter array1 elements: ");
    for(i = 0; i<size; i++) scanf("%d", &a[i]); // getting array1 elements

    printf("\nenter array2 elements: ");
    for(i = 0; i<size; i++) scanf("%d", &b[i]); // getting array1 elements

    printf("\nOriginal arrays:");
    print_array_elements(a, b, size); // printing original array

    swap_arrays(a, b, size); // swapping array elements

    printf("\n\nSwapped arrays:");
    print_array_elements(a, b, size); // printing swapped array

    printf("\n");

    return 0;
}