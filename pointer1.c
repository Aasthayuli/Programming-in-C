// Pointer
#include <stdio.h>
int main()
{
    int age = 20;
    int *ptr = &age;
    printf("ptr = %d\n", ptr);

    ptr++;
    printf("ptr = %d\n", ptr);
    return 0;
}