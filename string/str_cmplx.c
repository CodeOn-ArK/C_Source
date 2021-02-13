#include<stdio.h>

int main()
{
	struct cmplx
	{
		double real;
		double img;
	};
	struct cmplx add(struct cmplx c1, struct cmplx c2)
	{
		struct cmplx c3;
		c3.real = c1.real + c2.real;
		c3.img = c1.img + c2.img;
		return(c3);
	};
	struct cmplx product(struct cmplx c1, struct cmplx c2)
	{
		struct cmplx c3;
		c3.real = c1.real*c2.real - c1.img*c2.img;
		c3.img = c1.real*c2.img + c1.img*c2.real;
		return(c3);
	};
	struct cmplx c1,c2;

	printf("Enter the complex no. c1: \t");
	scanf("%lf %lf", &c1.real, &c1.img);
	printf("\nEnter the complex no. c2:\t");
	scanf("%lf %lf", &c2.real, &c2.img);
	
	printf("\nThe sum of c1 and c2 is \n real : %lf & img : %lf\n", add(c1,c2).real, add(c1,c2).img);

	printf("\n The product of c1 & c2 is \n real : %lf & img : %lf \n", product(c1,c2).real, product(c1,c2).img);

	return 0;
}
