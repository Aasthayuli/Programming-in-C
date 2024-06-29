// a function to calculate the percentage of a student for marks in science , maths and sanskrit

#include <stdio.h>
int calculatepercent(int maths, int science, int sanskrit);
int main()
{
    int maths = 97;
    int science = 95;
    int sanskrit = 96;

    printf("percentage is %d", calculatepercent(maths, science, sanskrit));
    return 0;
}

int calculatepercent(int maths, int science, int sanskrit)

{
    return ((maths + science + sanskrit) / 3);
}