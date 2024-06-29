// WAP to print namaste if user is indian and bonjour if user is french.

#include <stdio.h>

// void namaste();
// void bonjour();  //function declaration

int main()
{
    char ch;
    printf("enter i for indian & f for french:");

    scanf("%c", &ch);

    if (ch == 'i')
    {
        namaste();
    }
    else
    {
        bonjour();
    }
    return 0;
}

void namaste()
{
    printf("namaste\n");
}

void bonjour()
{
    printf("bonjour\n");
}