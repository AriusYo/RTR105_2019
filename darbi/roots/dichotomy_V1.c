#include<stdio.h>
#include<math.h>

int main()
{
  float a=0.01,b=1.5*M_PI, x, delta_x=1.e-3/*tas (bija) ir 0.00001*/, funkca, funkcb, funkcx;
  int i=0;

  funkca = sin(a);
  funkcb = sin(b);
  if(funkca * funkcb>0)
    {
    printf("Intervālā [%.2f;%.2f] sin(x) f-jai",a ,b);
    printf("Sakņu nav (vai ir pāra skaits sakņu)");
    return 1;
    }
    printf("sin(%7.3f)=%7.3f\t\t\t\t",a,sin(a));
    printf("sin(%7.3f)=%7.3f\n",b,sin(b));

  while((b-a)>delta_x)
    {
    i++;
    x = (a+b)/2.;
    if(funkca*sin(x)>=0)
      a = x;
    else
      b = x;
    printf("%2d sin(%7.3f)=%7.3f\t",i, a,sin(a));
    printf("%2d sin(%7.3f)=%7.3f\t",i, x,sin(x));
    printf("%2d sin(%7.3f)=%7.3f\n",i, b,sin(b));
    }
  printf("sakne atrodas pie x=%.3f, jo sin(x)=%.3f\n",x, sin(x));
  printf("darbība tika veikta %d reižu\n",i);
  return 0;
}
