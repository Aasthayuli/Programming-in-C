// Accessing value at address

#include <stdio.h>

int main()
{
    int age = 20;
    int *ptr = &age;

    // printing value at address operator
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));

    return 0;
}
