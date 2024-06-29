// temperature calculation using function
#include <stdio.h>
float calculatetemp(float celsius);

int main()
{

  printf("temperature in fahrenheint is %f\n", calculatetemp(0));

  return 0;
}

float calculatetemp(float celsius)
{
  return celsius * 0.18 + 32;
}