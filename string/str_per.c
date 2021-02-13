#include<stdio.h>

struct personal
{
	char name[20];
	int day;
	char month[10];
	int year;
	float salary;
}person;

int main()
{
	printf("Input values:\n");
	scanf("%s %d %s %d %f",
			person.name,
			&person.day,
			person.month,
			&person.year,
			&person.salary);
	printf("\n%s %d %s %d %f\n",
			person.name,
			person.day,
			person.month,
			person.year,
			person.salary);
}
