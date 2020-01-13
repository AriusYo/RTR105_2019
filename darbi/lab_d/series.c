/* sapajauta x
   priekšpēdējā saskaitāmā vērtība nav nulle bet loti maza
   pedeja sask vērtība
   fjas teilora rindas izteiksme ascii zimeshana
   rekurences reizinataja vert ascii zimeshana
*/

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
  printf("%d\t%.2f\t%.2f\t%.2f\n", (k-1), x, a, S);
  //printē priekšpēdējo un pēdējo saskaitāmo
  printf("priekšpēdējā saskaitāmā vērtība: %.5Lg\n", a499);
  printf("pēdējā saskaitāmā vērtība: %.5Lg\n", a500);
}
