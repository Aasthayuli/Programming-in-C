// use of while to print n natural numbers

#include <stdio.h>
int main()
{
   int n;
   printf("Enter number:");
   scanf("%d", &n);

   int i = 1;
   while (i <= n)
   {
      printf("%d\n", i);
      i++;
   }
   return 0;
}
