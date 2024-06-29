// Array Example

#include <stdio.h>
int main()
{
    int roll_no[10];

    printf("Input 10 numbers in new line\n");
    // inputing data
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &roll_no[i]);
    }
    // printing data
    printf("\nArray formed:");
    for (int i = 0; i < 10; i++)
    {
        printf("\n%d", roll_no[i]);
    }
}