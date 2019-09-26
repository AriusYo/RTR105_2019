#include<stdio.h>

char x;

int fun()
{
	char delta = 7;
	x = x + delta;
	return x;
}

int main()
{
	x = 32+15
	printf("pirms, %c \n", x);
	//paradas x vertiba 47

	fun();
	printf("pec 1 reizes, %c \n", x);
	//peec 1 reizes bus 54

	fun();
	printf("pec 2 reizem, %c \n", x);
	//yeet
}
