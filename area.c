
//wap to calculate the area of a square, a circle and a rectangle by me

#include<stdio.h>
#include<math.h>
#define PI 3.14

 void areasq();
 void areacircle();
 void arearect();

 int main()
 {
    char ch;
    printf("enter s for square/r for rectangle/ c for circle:");
    scanf("%c", &ch);
    if (ch=='s')
    {
        areasq();
    }
   else if(ch=='c')
    {
        areacircle();
    }
    else if(ch=='r')
    {
        arearect();
    }
    else
    {
      printf("invalid\n");
    }
     return 0;
 }
 
    
 

    void areasq()
    {
        float a;
        printf("enter side of square:");
        scanf("%f", &a);
        printf("%f\n", pow(a,2));
    }
     void areacircle()
     {
        float b;
        printf("enter radius of circle:");
        scanf("%f", &b);
        printf("%f\n", PI*pow(b,2));
     }
     void arearect()
     {
        float c;
        printf("enter Length\n");
        scanf("%f", &c);
        float d;
        printf("enter Breadth\n" );
        scanf("%f", &d);
        printf("%f\n",c*d);
     }
    
 


