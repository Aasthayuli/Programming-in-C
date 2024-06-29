// table in reverse order
#include <stdio.h>
int main()
{
    int n;
    printf("enter num_");
    scanf("%d", &n);

    printf("\ntable of %d in reverse order:\n", n);
    for (int i = 10; i >= 1; i--)
    {

        printf(" %d\n", n * i);
    }

    return 0;
}