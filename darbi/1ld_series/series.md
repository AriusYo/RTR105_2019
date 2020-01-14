# Labarotorijas darba Nr.1. - Teilora rindas - atskaite

## Teorija
Aprēķinot funkcijas vērtību izmantojot teilora rindu iegūst ļoti tuvu 
rezultātu vērtībai ko iegūst aprēķinot šo funkciju matemātiski

### kods
```
#include<stdio.h>
#include<math.h>
#include<float.h>

void main(){
  double x, y, S, a, a499, a500;
  int k;

  printf("Lietotāj, ievadiet x vērtību:");
  scanf("%lf", &x);
  y = cos(x*x);
  //printē izmantojot funkcijas isteiksmi
  printf("\ny=cos(%.2f)=%.2f\n\n", x*x, y);

  a = pow(-1,0)*pow(x,0)/(1.);
  S = a;
  printf("\tx\ta\tS\n");
  printf("\t%.2f\t%.2f\t%.2f\n", x, a, S);

  for(k=1;k<501;k++){
    a = a * (-1)*pow(x,4) / (((2*k)-1)*(2*k));
    S = S + a;
    if(k == 499) a499 = a;
    if(k == 500) a500 = a;
  }
  //printē pēc teilora rindas
  printf("%d\t%.2f\t%.2f\t%.2f\n", k, x, a, S);
  //printē priekšpēdējo un pēdējo saskaitāmo
  printf("priekšpēdējā saskaitāmā vērtība: %.5Lg\n", a499);
  printf("pēdējā saskaitāmā vērtība: %.5Lg\n", a500);

  printf("\n\n\t            4\n");
  printf("\t          -x^\n");
  printf("\tR =  ----------------\n");
  printf("\t      (2*k-1)*(2*k)\n");
  printf("\n");

  printf("\n");
  printf("\n\t\t  500\n");
  printf("\t\t______\n");
  printf("\t\t\\               k  4*k\n");
  printf("\t\t \\          (-1)^*x^\n");
  printf("\ty(x)=\t  |     --------------   = cos(x*x)\n");
  printf("\t\t /           (2*k)!\n");
  printf("\t\t/      \n");
  printf("\t\t------\n");
  printf("\t\t  k=0\n");
}
```
Paprasa no lietotāja x vērtību
aprēķina un parāda funkcijas vērtību matemātiski
parāda x, sākotnējā saskaitāmā un rezultāta vērtības
aprēķina funkciju pēc teilora rindas un parāda rezultātu
parāda teilora rindas priekšpēdējo un pēdējo rezultātu

### Rezultāts
```
Lietotāj, ievadiet x vērtību:1

y=cos(1.00)=0.54

	x	a	S
	1.00	1.00	1.00
500	1.00	0.00	0.54
priekšpēdējā saskaitāmā vērtība: 1.6794e-4932
pēdējā saskaitāmā vērtība: 1.6794e-4932

	            4
	          -x^
	R =  ----------------
	      (2*k-1)*(2*k)



		  500
		______
		\               k  4*k
		 \          (-1)^*x^
	y(x)=	  |     --------------   = cos(x*x)
		 /           (2*k)!
		/      
		------
		  k=0


```

### Analīze
Funkcijas cos(x*x) rezultāts aprēķinot to matemātiski un ar teilora rindu praktiski
sakrīt, jo pēdējie saskaitāmie ir ļoti mazas vērtības  

### Figures
![cos(x*x)](https://github.com/AriusYo/RTR105_2019/blob/master/darbi/lab_d/cos(x*x)%20bez%20pildijuma.png)
