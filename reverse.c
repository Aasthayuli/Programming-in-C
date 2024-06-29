// print the sum of n natural numbers and also it's reverse.
// for loop in different way
#include <stdio.h>
int main()
{
    int n;
    printf("enter num: ");
    scanf("%d", &n);

    int sum = 0;
    printf("Reverse: ");
    for (int i = 1, j = n; i <= n && j >= 1; i++, j--)
    {
        sum = sum + i;
        printf("%d\t", j);
    }
    printf("\nsum is: %d\n", sum);

    return 0;
}