#include<stdio.h>
#include<string.h>

#define	N	10	//SYMBOLIC CONSTANT

int main()
{
	int count; // DECLARATION
	float sum, average, number;
	
	sum =0;
	count =0;

	while(count < N) //loop until all elements taken
	{
		scanf("%f", &number);
		sum += number;
		count += 1;
	}
	average = sum/N;
	printf("N = %d Sum = %f\n", N, sum);
	printf("Average = %f\n", average);
	return 0;
}
