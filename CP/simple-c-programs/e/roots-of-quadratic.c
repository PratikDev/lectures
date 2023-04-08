#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, determinant, root1, root2;

    printf("Enter the coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    determinant = b * b - 4 * a * c;

    if (determinant > 0)
    {
        root1 = (-b + sqrt(determinant)) / (2 * a);
        root2 = (-b - sqrt(determinant)) / (2 * a);

        printf("The roots are real and different:\n");
        printf("Root 1 = %f\n", root1);
        printf("Root 2 = %f\n", root2);
    }
    else if (determinant == 0)
    {
        root1 = -b / (2 * a);

        printf("The roots are real and equal:\n");
        printf("Root 1 = Root 2 = %f\n", root1);
    }
    else
    {
        printf("The roots are complex and different:\n");
    }

    return 0;
}
