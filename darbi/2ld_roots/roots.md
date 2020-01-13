# Labarotorijas darba Nr.2. - Saknes - atskaite

## Teorija
Sakne tiek aprēķināta paņemot apgabala a - b vidusspunktu, šo apgabalu samazina
lIdz iegūst salīdzinoši precīzu saknes atrašanās vietu

### kods
```
#include<stdio.h>
#include<math.h>

void main(){
  double a, b, c, x, y, deltax, funkca, funkcb, funkcx;
  int k;

  printf("Lietotāj, ievadiet vērtību a:");
  scanf("%lf", &a);
  printf("\nIevadiet vērtību b:");
  scanf("%lf", &b);
  printf("\nIevadiet vērtību c:");
  scanf("%lf", &c);
  printf("\nIevadiet precizitāti:");
  scanf("%lf", &deltax);

  funkca = cos(a*a);
  funkcb = cos(b*b);

  if((funkca * funkcb)>0){
    printf("intervālā [%lf;%lf] cos(x*x) funkcijai sakņu nav, vai arī ir pāra skaits sakņu", a, b);
  }

  for(k=0;(b-a)>deltax;k++){
    x=(a+b)/2.;
    if(funkca*(cos(x*x)-c)>0) a = x;
    else b = x;
  }
  printf("x funkcijai cos(x*x)=%lf ir %lf\n", c, x);
  printf("cos(%lf*%lf)=%lf\n", x, x, cos(x*x));
  printf("iterācijas lai atrastu x:%d\n",(k+1));
}
```
paprasa lietotājam a, b, c vērtības un precizitāti
pārbauda un printē ja funkcijai nav sakņu vai ir pāra skaits sakņu intervālā no a - b
aprēķina aptuveno sakni funkcijai cos(x*x)=c
printē funkcijas sakni, funkcijas y=cos(x*x) rezultātu un iterāciju skaitu kas nepieciešams lai atrastu sakni
### Rezultāts
```
Lietotāj, ievadiet vērtību a:0

Ievadiet vērtību b:3

Ievadiet vērtību c:1

Ievadiet precizitāti:0.001
x funkcijai cos(x*x)=1.000000 ir 0.000732
cos(0.000732*0.000732)=1.000000
iterācijas lai atrastu x:13
```
### Analīze
šādi rēķinot, sakne nekad nebūs pilnīgi precīza 
ar lielāku precizitāti ir iespējams noteikt precīzāku saknes atrašanās vietu, ja tāda ir

### Figures
![Bildes apraksts](https://raw.githubusercontent.com/tatusmatrix/RTR223f/master/2018_2019/images/CW1_1_1$


