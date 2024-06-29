//table of n
#include<stdio.h>
int main()
{
    int n;
    printf("enter num: ");
    scanf("%d", &n);

    int num;
    for (int i=1;i<=10; i++)
    {
        printf("%d\n", n*i);
    }
    return 0;
}