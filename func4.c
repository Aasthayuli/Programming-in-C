// printing table using function

#include <stdio.h>

void table(int n); // function declaration

int main()
{
   int n;
   printf("enter num: ");
   scanf("%d", &n);

   table(n); // function call
   return 0;
}

void table(int n) // function definition
{
   for (int i = 1; i <= 10; i++)
   {

      printf("%d\n", n * i);
   }
}