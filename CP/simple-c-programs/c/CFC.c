#include <stdio.h>

int main()
{
    float temperature, fahrenheit, celsius;
    int choice;

    printf("Enter temperature: ");
    scanf("%f", &temperature);

    printf("Enter your choice:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        fahrenheit = (temperature * 9 / 5) + 32;

        printf("%fC is equivalent to %fF", temperature, fahrenheit);
        break;

    case 2:
        celsius = (temperature - 32) * 5 / 9;

        printf("%fF is equivalent to %fC", temperature, celsius);
        break;

    default:
        printf("Invalid choice!");
        break;
    }

    return 0;
}
