#include <stdio.h>
#include <math.h>

int main()
{
    float u, a, s, v;

    printf("Enter initial velocity (u): ");
    scanf("%f", &u);

    printf("Enter acceleration (a): ");
    scanf("%f", &a);

    printf("Enter displacement (s): ");
    scanf("%f", &s);

    v = sqrt((u * u) + (2 * a * s));

    printf("Final velocity (v) = %f", v);

    return 0;
}
