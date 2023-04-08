#include <stdio.h>

int main()
{
    float temperature, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &temperature);

    celsius = (temperature - 32) * 5 / 9;

    printf("%fF is equivalent to %fC", temperature, celsius);

    return 0;
}
