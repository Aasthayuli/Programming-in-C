#include <stdio.h>
int main()
{
    char days; // m-mon;t-tue;w-wed;th;f;s;S;
    printf("enter days(first letter of the days or capital letter for another with same letter):");
    scanf("%s", &days);

    switch (days)
    {
    case 'm':
        printf("monday\n");
        break;
    case 't':
        printf("tuesday\n");
        break;
    case 'w':
        printf("wednesday\n");
        break;
    case 'T':
        printf("thursday\n");
        break;
    case 'f':
        printf("friday\n");
        break;
    case 's':
        printf("saturday\n");
        break;
    case 'S':
        printf("sunday\n");
        break;
    default:
        printf("not a valid day!");
        return 0;
    }
}