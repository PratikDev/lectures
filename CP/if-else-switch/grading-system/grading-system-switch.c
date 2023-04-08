#include <stdio.h>

int main()
{
    float percentage;

    printf("Enter percentage marks: ");
    scanf("%f", &percentage);

    int grade = (int)(percentage / 10);

    switch (grade)
    {
    case 10:
    case 9:
        printf("Grade: A+\n");
        break;
    case 8:
        printf("Grade: A\n");
        break;
    case 7:
        printf("Grade: B+\n");
        break;
    case 6:
        printf("Grade: B\n");
        break;
    case 5:
        printf("Grade: C\n");
        break;
    case 4:
        printf("Grade: D\n");
        break;
    default:
        printf("Grade: F\n");
    }

    return 0;
}
