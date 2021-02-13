#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

struct record{
	char author[20];
	char title[20];
	float price;
	struct{
		char month[20];
		int year;
	}date;
	char publisher[10];
	int quantity;
};

int look_up(struct record book[], char s1[], char s2[], int m);
void get(char string[]);
int main()
{
	char title[30], author[20], response[10], quantity[10];
	int index, no_of_records;
	struct record book[] = {

	{"Ritchie", "C Language", 45.00, "May", 1977, "PHI", 10},
	{"Kochan", "Programming", 75.80, "june", 1989, "CMI", 20},
	{"Saheb", "neoboard", 2020, "O'Relly", 20}

	};

	no_of_records = sizeof(book)/sizeof(struct record);

	do{
		printf("\nEnter author\n");
		scanf("%s", &author);
		printf("\nEnter title name\n");
		scanf("%s",&title);;
		index = look_up(book, title, author, no_of_records);
		if(index != -1)
		{
			printf("\n%s\t \t%s \n%d\t %d\n %s\t %d",
					book[index].author,
					book[index].title,
					book[index].price,
					book[index].date.month,
					book[index].date.year,
					book[index].publisher,
					book[index].quantity);
			printf("\nEnter number of copies:\n");
			get(quantity);
			if(atoi(quantity) < book[index].quantity)
				printf("\nCost of %d copies = %.2f\n",
						atoi(quantity),
						book[index].price*atoi(quantity));
			else
				printf("\nRequired stock not in list\n");
				printf("Available stock: %d\n", book[index].quantity);
		}
		printf("\nDo you want any other book(y/n)\n");
		get(response);
	}while(response[0] == 'y' || response[0] == 'Y');
	printf("Thank you!! \t\tGood Bye\n");
}

int look_up(struct record book[], char title[], char author[], int m)
{
	int i;
	for(i=0 ; i<m; i++)
	{
		if(strcmp(title, book[i].title) == 0 &&(strcmp(author, book[i].author)) == 0)
			return(i);
	}
	return(-1);
}

void get(char string[])
{
	char c;
	int i=0;
	do{
		c = getchar();
		string[i++] = c;
	}while(c != '\n');
	string[i-1] = '\0';
}
