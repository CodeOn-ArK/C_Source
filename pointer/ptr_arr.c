#include<stdio.h>

int main()
{
	int *p, sum, R,C;
	int x[3][4] = { {1,2,3,4},
			{5,6,7,8},
			{9,10,11,12}};
	p = x[0];
	printf("The matrix as given as input is as follows\n");
	for( R=0; R<3; R++)
	{
		for( C=0; C<4; C++)
		{
			printf("%d\t", *(*(x+R)+ C) );
		}
		printf("\n");
	}
	printf("\nThe address of each element of the matrix is\n");
	for(R=0; R<3; R++)
	{
		for(C =0; C<4; C++)
		{
			printf("%p\t", (*(x+R) +C));
		}
		printf("\n");
	}
	return 0;
}
