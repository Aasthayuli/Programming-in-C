// Provide Grade according to Marks

#include <stdio.h>
int main()
{
    int marks;
    printf("enter marks:");
    scanf("%d", &marks);

    if (marks <= 100 && marks >= 90)
    {
        printf("Grade: A+\n");
    }
    else if (marks < 90 && marks >= 70)
    {
        printf("Grade: A\n");
    }
    else if (marks < 70 && marks >= 30)
    {
        printf("Grade: B\n");
    }
    else if (marks < 30 && marks > 0)
    {
        printf("Grade: C\n");
    }
    else
    {
        printf("wrong marks provided!");
    }

    return 0;
}
