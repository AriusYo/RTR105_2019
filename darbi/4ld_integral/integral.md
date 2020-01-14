# Labarotorijas darba Nr.4. - Integrāļi - atskaite

## Teorija
Kvadrātu metode laukumā ko vēlas aprēķināt zīmē daudz taisnstūru, kuru laukumus summē
Trapeces metode laukumā ko vēlas aprēķināt zīmē trapeces, rēķinot laukumu iekšējajās 
malas reizina ar 2, taču ārējās nē, summa jādala ar 2
Simpsona metodi izmanto tikai ar pāra skaitu daļu. 
Sadala laukumu vairākās daļās, ārējās daļas nav jāreizina, 
taču iekšējās ik pa 2 ir jāreizina ar 4 vai 2

### kods
```
#include<stdio.h>
#include<math.h>

void main(){

  double a, b, x, delta_x, lauk_rect, lauk_trapez, lauk_simps;
  int k=0;

  printf("Ievadiet skaitli a:");
  scanf("%lf", &a);
  printf("Ievadiet skaitli b:");
  scanf("%lf", &b);
  printf("Ievadiet precizitāti:");
  scanf("%lf", &delta_x);

  for(x = a;x<=b; x+=delta_x){
    lauk_rect += (delta_x*cos(x*x));

    if(x == a || x == b) lauk_trapez += cos(x*x);
    else lauk_trapez += (2*cos(x*x));

    if(x == a || x == b) lauk_simps += cos(x*x);
    else if(k%2 == 0) lauk_simps += (4*cos(x*x));
    else lauk_simps += (2*cos(x*x));
    k++;
  }
printf("Laukums pēc kvadrāta metodes: %lf\n", lauk_rect);
printf("Laukums pēc trapeces metodes: %lf\n", (delta_x*lauk_trapez/2));
printf("Laukums pēc Simpsona metodes: %lf\n", (delta_x*lauk_simps/3));
}
```
paprasa lietotājam a, b vērtību un precizitāti
aprēķina laukumu funkcijai cos(x*x) ar katru metodi
printē rezultātu ar katru metodi
### Rezultāts
```
Ievadiet skaitli a:0
Ievadiet skaitli b:3
Ievadiet precizitāti:0.0001
Laukums pēc kvadrāta metodes: 0.702959
Laukums pēc trapezoldāla metodes: 0.702909
Laukums pēc Simpsona metodes: 0.702891
```
### Analīze
Rezultāti ir līdzīgi, un ar lielāku precizitāti būtu iespējams precīzāk aprēķināt laukumus

### Figures
![cos(x*x)ar pildītu laukumu](https://github.com/AriusYo/RTR105_2019/blob/master/darbi/lab_d/cos(x*x)%20ar%20pildijumu.png)


