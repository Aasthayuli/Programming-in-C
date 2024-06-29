
// to print factorial of any number

#include <stdio.h>
int main()
{
  int n;
  printf("enter num: ");
  scanf("%d", &n);
  int fac = 1;

  for (int i = 1; i <= n; i++)
  {
    fac = fac * i;
  }
  printf("factorial of %d is %d\n", n, fac);
  return 0;
}