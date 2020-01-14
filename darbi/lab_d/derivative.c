#include<stdio.h>
#include<math.h>

void main(){
	double a, b, x, y, analythical, forward, twoAnalyth, twoForward, delta_x;
	FILE *results;

	printf("Lietotāj, lūdzu ievadiet vērtību a: ");
	scanf("%lf", &a);
	printf("Ievadiet vērtību b: ");
	scanf("%lf", &b);
	printf("Ievadiet precizitāti: ");
	scanf("%lf", &delta_x);

	printf("x\t\tf(x)\t\tfa'(x)\t\tfd'(x)\t\tfa''(x)\t\tfd''(x)");
	results = fopen("derivative.dat","w");
	fprintf(results,"x\t\tf(x)\t\tfa'(x)\t\tfd'(x)\t\tfa''(x)\t\tfd''(x)");
	//x	f(x)	fa'(x)	fd'(x)	fa''(x)	fd''(x)
	for(x=a;x<=b;x+=delta_x){
		y = cos(x*x);
		analythical = (-1)*sin(x*x)*2*x;
		forward = cos((x+delta_x)*(x+delta_x))-y;
		twoAnalyth = (-1)*cos(x*x)*2*x*2;
		twoForward = (-1)*cos((x+delta_x)*(x+delta_x))*2*(x+delta_x)*2;
		fprintf(results,"\n%lf\t%lf\t%lf\t%lf\t%lf\t%lf", x, y, analythical, forward, twoAnalyth, twoForward);
		printf("\n%lf\t%lf\t%lf\t%lf\t%lf\t%lf", x, y, analythical, forward, twoAnalyth, twoForward);
	}
	fclose(results);
	printf("\n");
}

