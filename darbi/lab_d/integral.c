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
printf("Laukums pēc trapezoldāla metodes: %lf\n", (delta_x*lauk_trapez/2));
printf("Laukums pēc Simpsona metodes: %lf\n", (delta_x*lauk_simps/3));
}
