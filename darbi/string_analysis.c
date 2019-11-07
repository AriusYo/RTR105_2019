#include<stdio.h>
#include<string.h>

void main()
{
char str[51];
printf("Lūdzu ievadiet savu teikumu:");
scanf("%[^\n]%*c",str);

strlen(str);
printf("%d");
}
