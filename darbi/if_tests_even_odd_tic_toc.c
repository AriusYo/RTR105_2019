#include<stdio.h>
#include<time.h>

void  main()
 {
 int  number;
 clock_t start_t, end_t, total_t;
 printf("Cienījamais lietotāj, lūdzu ievadi skaitli: ");
 scanf("%d", &number);
 start_t = clock();
 if ( (number%2)==0 ){
	printf("Tavs skaitlis %d ir pāra skaitlis\n", number);
 }
 else{
	printf("tavs skaitlis %d ir nepara\n", number);
 }
 end_t = clock();
printf("aprēķins ar %c aizņēma %ld līdz %ld -> %ld (s)\n", 37, total_t, end_t,end_t-start_t);

 start_t = clock();
 if ( number%2 ){
	printf("Tavs skaitlis %d ir nepara skaitlis\n", number);
 }
 else{
	printf("tavs skaitlis %d ir para\n", number);
 }
 end_t = clock();
 printf("aprēķins ar %c aizņēma %ld līdz %ld -> %ld (s)\n", 37, total_t, end_t,end_t-start_t);
 start_t = clock();
 if ( (number<<31)>>31){
	printf("Tavs skaitlis %d ir nepāra skaitlis\n", number);
 }
 else{
	printf("tavs skaitlis %d ir para\n", number);
 }
 end_t = clock();
 printf("aprēķins ar << un >> aizņēma %ld līdz %ld -> %ld (s)\n", total_t, end_t,end_t-start_t);

}

