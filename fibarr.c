// fibonacci sequence

#include <stdio.h>

int main()
{
    int n;
    printf("enter n (where n>2):");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    printf("fibonacci series: ");
    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d\t", fib[i]);
    }
    printf("\n");
    return 0;
}
