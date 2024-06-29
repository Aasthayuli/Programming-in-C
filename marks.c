// Examine Pass or Fail

#include <stdio.h>
int main()
{
    int marks;
    printf("enter marks:");
    scanf("%d", &marks);

    if (marks > 30 && marks < 100)
    {
        printf("Pass !\n");
    }
    else if (marks >= 0 && marks <= 30)
    {
        printf("Fail !\n");
    }

    return 0;
}
