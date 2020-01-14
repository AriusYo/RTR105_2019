/* Āris Spruģevics
   2019.gada 7.novembris */

#include<stdio.h>

int main()
 {
 int num, i; // num -- skaitlis
 int reizinajums = 1; // faktorials no 0! = 1

 printf("Lūdzu ievadiet veselu skaitli:");
 scanf("%d", &num);

 for( i=1 ; i<=num ; i++ )
  {
  reizinajums = reizinajums * i;
  }
  // Izvadee ir kljuuda. Labo to!

  printf("Skaitlja %d faktorials ir:%d \n",num ,reizinajums);
 }
