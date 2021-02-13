#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

int main()
{
	char *buffer; 			//ALLOCATING MEMORY
	
	if(!(buffer = (char*)malloc(10)))
	{
		printf("\nMalloc failed\n");
		exit(1);
	}

	printf("Buffer of size %d created 	%d\n", malloc_usable_size(buffer), sizeof((char*)malloc(10)));
	strcpy(buffer, "KOLKATA");
	printf("\nbuffer contains: %s\n", buffer);
	
	if(!(buffer = (char*)realloc(buffer,15)))
	{
		printf("Allocation failed\n");
		exit(1);
	}
	printf("\nBuffer size modified\n");
	printf("Buffer stills contains %s\n", buffer);

	strcpy(buffer, "SECUNDERABAD");
	printf("Buffer now contains %s\n", buffer);

	free(buffer);
	return 0;
}

