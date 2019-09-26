#include<stdio.h>
void main()
{
long long int a = 50000;
long long int b = 1000000;
long long int c = a * b;

printf("int failu izmērs %lld baiti\n", sizeof (int) );
printf("a = %lld, b = %lld \n", a, b);
printf("c = a * b = %lld * %lld = %lld \n", a, b, c);
}
