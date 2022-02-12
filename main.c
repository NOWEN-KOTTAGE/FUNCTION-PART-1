#include<stdio.h>
float area( float length, float width);
float add ( float a, float b);
float sub (float a, float b);
int main(void)
{

        float L=15,W=9;
        float Farea,final,Rarea;
        float l1=5,l2=3.5;
        float w=4.5;
        Farea=area(L,W);
        Rarea=area(add(l1,l2),w);
        printf("Final answer is %.2f",sub(Farea,Rarea));
       return 0;
}
//calculate the area of a rectangle
float area( float length, float width)
{
                  return length * width;
}
//add two numbers
float add ( float a, float b)
{
           return a + b;
}
//subtract two numbers
float sub (float a, float b)
{
          return a - b;
}
        