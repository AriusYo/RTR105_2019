#include<stdio.h>
#include<math.h>
/*
int augosa(int a,int b,int c);
{
if(a>b && b>c)
 {

 }
}

int dilstosa();

int augosa_mod();

int dilstosa_mod();
*/
void main()
{
int a,b,c, t;
printf("ievadiet 3 skaitļus:");

scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

if(a>b && a>c)
 if(b>c) //abc
 ;
 else
 {t=c;c=b;a=t;}//acb

if(b>a && b>c)
 if(a>c)
  {t=b;b=a;a=t;}//bac
 else
 {t=a;a=b;b=t;t=b;b=c;c=t;} //bca

if(c>a && c>b)
 if(a>b)
 {t=a;a=c;c=t;t=c;c=b;b=t;}//cab
 else
 {t=a;a=c;c=t;}//cba

printf("Augošā secība: %d %d %d \n",c,b,a);
}
