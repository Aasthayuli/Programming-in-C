//printing address

#include<stdio.h>
int main()
{
   int age =20;
   int *ptr= &age;

   //address printing
    printf("%p\n", &age);
   printf("%u\n", &age);
    printf("%u\n", ptr);
    printf("%u\n",&ptr);
        return 0;
    
}