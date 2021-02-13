#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

struct class
{
	int number;
	char name[20];
	float marks;
};
int main()
{
	int x;
	struct class c3;
	struct class c1 = {123 , "PRAKASH", 23};
	struct class c2 = {23, "PRAKASH", 34};

	c3 = c2;

	x = (!strcmp(c3.name,c2.name) && (c3.marks == c2.marks))?1:0;

	if(x == 1){
		printf("\n student2 and student 3 are same\n");
		printf("%d %s %f\n", c3.number, c3.name, c3.marks);
	}
	else printf("\nstudent2 & student3 are different\n");
	return 0;
}
