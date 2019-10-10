#include<stdio.h>

void  main()
 {
 int  number;
 printf("Cienījamais lietotāj, lūdzu ievadi skaitli: ");
 scanf("%d", &number);

 //if ( (number%2)=0 ){ viena vienadibas zime ir piešķiršana
 if ( (number%2)==0 ){
	printf("Tavs skaitlis %d ir pāra skaitlis\n", number);
 }
 else{
	printf("tavs skaitlis %d ir nepara\n", number);
 }
 int remainder=number%2;
 //if ( remainder=0 ){piešķiršana vienmēr var izdarīt
// if(1) vienmēr nepāru
 if ( remainder==0 ){
	printf("Tavs skaitlis %d ir pāra skaitlis\n", number);
 }
 else{
	printf("tavs skaitlis %d ir nepara\n", number);
 }
}

