// calculating temperature

#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("enter the temperature in celsius: ");
    scanf("%f", &celsius);

    printf("fahrenheit: ");
    fahrenheit = (1.8 * celsius + 32);
    printf("%f", fahrenheit);
    return 0;
}