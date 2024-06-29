// call by reference (swapping of values using pointers)

#include <stdio.h>

void swap(int *a, int *b);
int main()
{
    int x = 3, y = 4;
    printf("\nActual values: x=%d & y=%d\n", x, y);
    swap(&x, &y);
    printf("Swapped values: x=%d & y=%d\n\n", x, y);
    return 0;
}
void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
    printf("Referenced values: a=%d & b=%d\n", *a, *b);

    //(this will print the value of a and b and we know that and b have swapped values of x and y)
}
