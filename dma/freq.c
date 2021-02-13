#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *num, *freq, i, size;

	printf("\n Enter the size of the list:");		//ENTERING SIZE LIST
	scanf("%d", &size);

	num = (int*)malloc(size*sizeof(int));
	printf("\nEnter the numbers\n");
	for(i=0; i<size; i++)					//SCANNING THE NUMBERS
	{
		printf("\nEnter num[%d]:\n", i);
		scanf("%d", &num[i]);
		if(num[i]<0 || num[i]>4)
		{
			printf("\nNumber shld be written in range(0-4)\n");
			i--;
			continue;
		}
	}
	freq = (int*)calloc(5, sizeof(int));			//ALLOCATION OF MEMORY
	for(i=0; i<size; i++)
	{
		freq[num[i]]++;
	}

	printf("\nThe frequencies of the numbers are: \n");	//PRINTING NUMBERS
	for( i=0; i<5; i++)
		printf("\nfreq[%d] = %d\n", i, freq[i]);

	return 0;
}

