#include<stdio.h>

void main()
 {
 int i=0,N,fact=1,fact_old=1;
 printf("ievadiet skaitli: __!\b\b\b");
 scanf("%d",&N);

  for(i=2;fact/(i-1)==fact_old && i<=N;i++)
   {
   fact_old = fact;
   fact=fact * i;
   }

   if(fact/(i-1) == fact_old && i>N)
    {
    printf("faktoriāls %d ir %d \n",i-1,fact);
    }
   else
    {
    printf("nevaru aprēķināt\n");
    }
 }
