#include<stdio.h>

int main() {
    int i, size, a[100], sum = 0;
    float mean;

    printf("enter array size: ");
    scanf("%d", &size);

    for(i=0; i<size; ++i) {
        printf("\nEnter element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    for(i=0; i<size; i++) {
        sum += a[i];
    }

    mean = sum/size;

    printf("\nMean = %.4f\n", mean);
    

    return 0;
}