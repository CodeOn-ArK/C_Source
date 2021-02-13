#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p, *table;
	int size;
	printf("\nWhat is the size of the table\n");
	scanf("%d", &size);
	//--------------MEMORY ALLOCATION--------------
	if(!(table = (int*)malloc(size* sizeof(int))))
	{
		printf("No space available\n");
		exit(1);
	}
	printf("\n Address of the first byte is %u and sizeof( %d)\n", table, sizeof(table));
	//---------READING TABLE INPUTS----------------
	printf("\nInput table values\n");

	for(p = table; p<table + size; p++)
	{
		scanf("%d", p);
	}

	//---------PRINTING TABLE VALUES---------------
	
	for(p = table + size -1; p >=table; p--)
		printf("%d is stored in address %u\n", *p, p);

	return 0;
}
