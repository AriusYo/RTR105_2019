//cos(x^2)
//F(x)-A=0 sinx ir 0
//g(x)=0 sin
#include<stdio.h>
#include<math.h>

float modified_cos(float x, float A){
 return cos(x*x)-A;}

void main(){
	float x,y,delta_x,a,b,A;

	a = 0;
	b = 2*M_PI;

	printf("ievadiet sinx=A A vērtību:");
	scanf("%d",&A);

	x = a;
	delta_x = 0.1;
}
