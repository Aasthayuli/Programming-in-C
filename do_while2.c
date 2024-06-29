// keep taking number as input from user until user enters an odd no.

#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("enter num_");
        scanf("%d", &n);
        printf("%d\n", n);

        if (n % 2 == 1)
        {
            break;
        }

    } while (1);
    return 0;
}