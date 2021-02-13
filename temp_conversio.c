#include<stdio.h>

#define F_LOW 0		//------------------------------
#define F_MAX 250	//-----SYMBOLIC CONSTANTS-------
#define STEP  25	//------------------------------

int main()
{
	typedef float REAL;
	REAL f, c;

	f = F_LOW;
	printf("Fahrenheit      |    Celsius\n\n");
	//----------------------------------------------
	//STAY IN LOOP AND CONVERT FAHRENHEIT TO CELSIUS
	//---------------------------------------------
	while(f <= F_MAX)
	{
		c = (f - 32.0)/1.8;
		printf("\t%5.1f   |  %7.2f\n", f, c);
		f += STEP;
	}
	return 0;

}
