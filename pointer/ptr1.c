#include<stdio.h>

int main()
{
	int x,y;
	int *ptr, i=0;
	char *string, *str, *str1;
	string = "hello\0";
	str = string;
	printf("string in string is %s\n\n", string)	;
	printf("string in str is %s\n\n", str);
	while(*str != '\0')
	{
		printf("\nThe address of str[%d] is %x and char stored is %c\n", i, str, *str);
		str++;
		i++;
	}
	string = str;
	if(string == str) printf("\nBOTH are same\n");
	str1 = string;
	if(str == str1 ) printf("\nagain both are same\n");
	return 0;
}

