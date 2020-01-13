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
