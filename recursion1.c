// sum of first n natural numbers

#include <stdio.h>
int sum(int n); // func. declaration
int main()
{
   printf("sum is: %d", sum(5)); // func. call
   return 0;
}

//  now from here recursive function starts

int sum(int n) // func. definition starts
{
   if (n == 1) // base condition
   {
      return 1; // since we know that the return of base condition is 1
   }
   int sumNm1 = sum(n - 1); // within the bracket, we have mentioned count
   int sumN = sumNm1 + n;   // defined how function will actually work
   return sumN;
}