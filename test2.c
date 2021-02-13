#include<stdio.h>

int main()
{
	float x,y;	//VARIABLE DECLARATION
	double p,q;

	printf("Values of x & y:\t");	//INPUT VALUES OF X & Y
	scanf("%f %e", &x, &y);
	printf("\n");
	printf("x = %f\n y = %f\n\n", x, y);	//OUTPUT VALUES OF X & Y

	printf("Values of p & q:\t");	//INPUT VALUES OF P & Q
	scanf("%lf %lf", &p, &q );
	printf("\n\np = %.121f\np = %.12e",p,q);	//OUTPUT VALUES OF P & Q

	return 0;
}
