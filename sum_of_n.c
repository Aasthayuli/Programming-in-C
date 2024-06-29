// print the sum of  first n natural numbers
#include <stdio.h>
int main()
{
  int n;
  printf("enter num_");
  scanf("%d", &n);

  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    sum = sum + i;
  }
  printf("sum is %d", sum);

  return 0;
}
