/*lietotājs ievada skaitli "kādam y tu gribi noteikt atbilstošo x"
jānosaka pēc iespējas tuvāk skaitlim intervālā
*/
#include<stdio.h>
#include<math.h>

int main()
{
  float a=0.01,b=1.5*M_PI, x, delta_x=1.e-3/*tas (bija) ir 0.00001*/, funkca, funkcb, funkcx;
  int i=0;
  int A;

  printf("Lietotāj, ievadiet skaitli kura sin vēlaties iegūt:");
  scanf("%d",A);

  funkca = (sin(a)-A);
  funkcb = (sin(b)-A);
  if(funkca * funkcb>0)
    {
    printf("Intervālā [%.2f;%.2f] sin(x) f-jai",a ,b);
    printf("Sakņu nav (vai ir pāra skaits sakņu)");
    return 1;
    }
    printf("sin(%7.3f)=%7.3f\t\t\t\t",a,(sin(a)-A));
    printf("sin(%7.3f)=%7.3f\n",b,(sin(b)-A));

  while((b-a)>delta_x)
    {
    i++;
    x = (a+b)/2.;
    if(funkca*(sin(x)-A)>=0)
      a = x;
    else
      b = x;
    printf("%2d sin(%7.3f)=%7.3f\t",i, a,(sin(a)-A));
    printf("%2d sin(%7.3f)=%7.3f\t",i, x,(sin(x)-A));
    printf("%2d sin(%7.3f)=%7.3f\n",i, b,(sin(b)-A));
    }
  printf("sakne atrodas pie x=%.3f, jo sin(x)=%.3f\n",x, (sin(x)-A));
  printf("darbība tika veikta %d reižu\n",i);
  return 0;
}
