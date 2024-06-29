//keep taking number as an input from user until it is a multiple of 7

#include<stdio.h>
int main()
{
    int n;
   do
   {
    printf("enter num_");
    scanf("%d", &n);
    printf("%d\n", n);

    if (n%7==0)
    {
       break; 
    }
    
    }
        while (1);
        printf("code ended!");
        return 0;

    
}