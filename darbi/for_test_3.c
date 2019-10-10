#include<stdio.h>

void  main()
 {
 int  number1, number2, yes_no, i;
 for(yes_no=1, i=1 ;yes_no  ; i++ )
  {
  printf("Cienījamais lietotāj, lūdzu ievadi 1. skaitli: ");
  scanf("%d", &number1);
  printf("Cienījamais lietotāj, lūdzu ievadi 2. skaitli: ");
  scanf("%d", &number2);

  if(number1 > number2)
   printf("Tavs 1. skaitlis %d ir > nekā 2. skaitlis %d\n", number1,number2);
  else
   printf("tavs 1. skaitlis %d ir < nekā 2. skaitlis %d\n", number1,number2);
if(i==5){
  printf("jūs esat sasniedzis %d reizes\n", i);
  break;
  }
  else{
  printf("Cienījamais lietotaj, vai vētaties turpināt? (šī bija reize %d.)", i);
  printf("jā - jebkurš, nē - 0)\n");
  scanf("%d", &yes_no);
  }
}

  printf("šis teksts parādīsies jebkurā gadījumā\n");

 }

