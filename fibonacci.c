// fibonacci number
#include <stdio.h>
int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int fibNm1 = fib(n - 1);
    int fibNm2 = fib(n - 2);
    int fibN = fibNm1 + fibNm2;
    return fibN;
}
int main()
{
    int fibNum = fib(6);
    printf("fibonacci of 6 is %d", fibNum);
    return 0;
}