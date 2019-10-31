#include <stdio.h>
//deklarē funkciju double

float squar(float in);

//funkcijas definēšana (izmanto??)
int main()
 {
 float x;
  for(x=0 ; x<1 ; x+=0.1)
  {
  printf("%f %f\n", x, squar(x));
  }
 }

//definē funkciju
float squar(float in)
{
return in * in;
}
