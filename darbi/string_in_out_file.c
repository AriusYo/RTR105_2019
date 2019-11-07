
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
FILE *fails;
char str[51];
char str2[51];

printf("Lūdzu ievadiet teikumu:");
scanf("%[^\n]%*c", str);

fails = fopen("strings.txt","w+");
fprintf(fails,"%s", &str);
fclose(fails);

fails = fopen("strings.txt", "r+");
fscanf(fails, "%[^\n]", str2);
printf("nolasīts no faila: %s\n", str2);
fclose(fails);


}
