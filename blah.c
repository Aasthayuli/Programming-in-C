//string comparison

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]= "apple";
    char str2[]= "banana";
    printf("%d",strcmp(str1, str2)); //returns -1 if not equal and 0 if equal
    
    return 0;
}