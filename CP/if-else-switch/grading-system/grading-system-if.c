#include <stdio.h>

int main()
{
    float percentage;

    printf("Enter percentage marks: ");
    scanf("%f", &percentage);

    if (percentage >= 80)
    {
        printf("Grade: A+\n");
    }
    else if (percentage >= 70 && percentage < 80)
    {
        printf("Grade: A\n");
    }
    else if (percentage >= 60 && percentage < 70)
    {
        printf("Grade: B+\n");
    }
    else if (percentage >= 50 && percentage < 60)
    {
        printf("Grade: B\n");
    }
    else if (percentage >= 40 && percentage < 50)
    {
        printf("Grade: C\n");
    }
    else if (percentage >= 30 && percentage < 40)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: F\n");
    }

    return 0;
}
