#include<stdio.h>
#include<math.h>

int main() //ar void neiet pow, vaja g++ kompileri kur nevar void
 {
 int i,N=50;

 for(i=1;i<=N;i++)
  printf("(1+1/2%d)^%d = %8.5f\n",i,i,pow(1+1./i ,i) );
  return 10;
 }
