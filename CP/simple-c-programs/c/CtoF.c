#include <stdio.h>

int main()
{
    float temperature, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &temperature);

    fahrenheit = (temperature * 9 / 5) + 32;

    printf("%fC is equivalent to %fF", temperature, fahrenheit);

    return 0;
}
