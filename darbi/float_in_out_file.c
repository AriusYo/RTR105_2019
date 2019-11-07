#include<stdio.h>
#include<stdlib.h	>
void main()
{
FILE *fails;//deklarē ka būs fails
float x = ((float)rand()/(float)(RAND_MAX)) * a;//sākums rasndof float generatoram

printf("Lūdzu ievadiet teikumu:");//nevajag

fails = fopen("float_values.txt","w+");//atver failu rakstīšanai
fprintf(fails,"%s", &);//raksta failā
fclose(fails);//aizver failu

fails = fopen("float_values.txt", "r+");//atver lasīšanai
fscanf(fails, "%[^\n]", );//skenē failu
printf("nolasīts no faila: %s\n", );//izkopē to ko nolasīja no faila
fclose(fails);//aizver failu


}
