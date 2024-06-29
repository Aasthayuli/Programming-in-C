#include <stdio.h>

int square(int num)
{
    num = num * num;
    printf("Inside function definition!\n");
    printf("square= %d\n\n", num);
}

int main()
{
    int sq = square(4);
    printf("Inside main function!\n");
    printf("number is=%d\n", sq);

    return 0;
}
