#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p, *table;
	int size;
	printf("\n What is the size of table?");
	scanf("%d", &size);
	printf("\n");
	//-------------------MEMORY ALLOCATION--------------------
	if((table = (int*)malloc(size *sizeof(int))) == NULL)
	{
		printf("No space available\n");
		exit(1);
	}
	printf("\nAddress of the first byte is %x\n", table);
	//---------------READING TABLE VALUES---------------------
	printf("\n Input table values\n");

	for(p = table; p<table + size; p++)
		scanf("%d", p);
	//-----PRINTING TABLE VALUES IN REVERSE ORDER------------
	for(p=table + size -1; p >= table; p--)
		printf("%d is stored at address %x \n", *p, p);
	return 0;
}
