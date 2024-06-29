//by shradha maam

#include<stdio.h>

float areasquare(float side);
float arearectangle(float a,float b);
float areacircle(float rad);
          
 int main()
 {
    float a=5.0;
    float b=10.0;
    printf("area is:%f",  arearectangle(a,b));
    return 0;
 }

 float areasquare(float side)
 {
    return side*side;
 }

 float arearectangle(float a, float b)
 {
    return a*b;
 }

 float areacircle(float rad)
 {
    return 3.14*rad*rad;
 }