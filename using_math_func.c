#include<stdlib.h>
#include<math.h>
#include<stdio.h>

#define	PI	3.1416
#define	MAX	180

int main()
{
	int angle;	/*--------variable declaration-------*/
	float x;
	char y = 'y';

	//while loop to calculate cos of an angle(in radian) and print the table
	while(y == 'y')
	{
		printf("Enter the value of angle in Degrees(*)\n");
		scanf("%d", &angle);
		x = (PI/MAX)*angle;

		printf("\nThe value of cos for %d degrees is %f\n", angle, cos(x));
		printf("Do u wish to continue?(y/n)\n");
		scanf("%c", &y);
		printf("X");
		if(y == 'n') exit(1);
		printf("X");
	}
	printf("\n\n");
	return 0;
}
