// call by value

#include <stdio.h>
/*void printaddress(int n);
 int main()
{
    int n=4;    //initialised value
    printaddress(n);
    printf("address is %u\n", &n);
    return 0;

}
 void printaddress(int n)
{
    printf("address is %u\n", &n);
}*/
// addresses will be printed different in both case coz in func. definition section there is a copy of the initialised value

// call by reference
void printaddress(int *n);
int main()
{
    int n = 4;
    printaddress(&n);              // address is passed here
    printf("address is %u\n", &n); // address will be printed
    return 0;
}

void printaddress(int *n)
{
    // printf("address is %u\n", *n);      Value will be printed
    printf("address is %u\n", &n); // This will print address coz here we used format specifier: %u
}