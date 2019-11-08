#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
FILE *fails;//deklarē ka būs fails
float mass1[5][2];
float mass2[5][3];
int j, i;

for(int i=0;i<5;i++)
  {
  for(int j=0;j<2;j++)
    {
    printf("ievadiet %d kolonas %d rindas skaitli:", j+1 , i+1);
    scanf("%f", &mass1[i][j]);
    }
  }

fails = fopen("float_in_out_file.txt","w+");
for( i=0;i<5;i++)
  {
  for( j=0;j<2;j++)
    {
    fprintf(fails,"%f ", mass1[i][j]);
    }
  fprintf(fails,"\n");
  }
fclose (fails);

fails = fopen("float_in_out_file.txt","r+");
for(i=0;i<5;i++)
  {
  for(j=0;j<2;j++)
    {
    fscanf(fails,"%f", &mass2[i][j]);
    }
  }
fclose (fails);

printf("skaitļi no faila sareizināti:\n");
for(i=0;i<5;i++)
  {
  printf("%f * %f = %f  ",mass2[i][0] ,mass2[i][1] ,mass2[i][0] * mass2[i][1]);
  printf("\n");
  }
}
