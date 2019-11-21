#include<stdio.h>
#include<math.h>

float x = 0;
float y = 0;
float b = 0;
float a = 0;
float delta_x;
float delta_y;
//float mass[20;2];
//FILE fails;

void main()
{
 a = 0;
 x = a;
 b = 2*M_PI;
 delta_x = 0.1;
 printf("\tx\t\ty\n");

 while(x<b)
 {
  y = sin(x);
  printf("%10.1f \t%10.1f\n",x,y);
  x = x + delta_x;
 }
}
/*
y = a;
delta_y = 0.1;
while(y<b)
 {
  printf("%f\n",y);

 }



/* for(x = -10;x < 10;x++)
 {
  y = sin(x);
  mass[x;0] = x;
  mass[x;1] = y;
 }
*/

