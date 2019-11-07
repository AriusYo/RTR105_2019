#include<stdio.h>
#include<string.h>

void main()
{
char str1[51];
char str2[51];
printf("ievadiet savu teikumu:");
scanf("%[^\n]%*c",str1);//skenē klaviatūru līdz nospieš enter
printf("pirmās rindas teikums ir: %s\n",str1);//jābūmt ievadītajam teik

strcpy(str2, str1);//kopē teikumu uz otru rindu
printf("nokopētās rindas teikums ir: %s\n", str2);//jābūt tam pašam teikumam kas pirmajā rindā
}
