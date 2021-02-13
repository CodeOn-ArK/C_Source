#include<stdio.h>

int main()
{
	char *name;
	int length;
	char *cptr ;
	name = "DELHI";
	cptr = name;
	printf("%s\n", name);
	while(*cptr != '\0')
	{
		printf(" %c is stored at address %u\n", *cptr, cptr);
		cptr++;
	}
	length = cptr - name;
	printf("\nLength of the string = %d\n", length);
	return 1;
}
