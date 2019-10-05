#include <stdio.h>

int main()

{
int a; //saskaitamais 1
printf("lai noskaidrotu vai jusu skaitlu summa ietilpst char datu tipa,\n------------------------------------------------------\nizvelieties divus skaitlus\n");
printf("ievadiet pirmo skaitli: ");
scanf("%d", &a);
printf("\nievadiet otro skaitli: ");
int b; //otrs saskaitamais
scanf("%d", &b);
int c; //iznakums
c=a+b;
	if (c < -128 || c > 128)
	{
	printf("jums sanak %d kas neietilps char\n", c);
}
	else
{
	printf("jums sanak skaitlis %d kas ietilpst char\n", c);
}

}
