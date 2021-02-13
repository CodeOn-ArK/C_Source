//////////////////////////////////////////////////////////
//		MY FIRST LINKED LIST PROG IN C		//
//////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

struct linked_list {
	int no;
	struct linked_list *next;
};
typedef struct linked_list node; 	//NODE TYPE DEFINED

int main()
{
	node *head;
	void create(node *p);
	int count(node *p);
	void print(node *p);
	head = (node *)malloc(sizeof(node));
        create(head);
        printf("%u\n", head->no);
        printf("%u\n", *head->next);
        printf("%u\n", head->next->no);
	printf("\n");
	print(head);
	printf("\n");
	printf("\nNumber of items = %d\n", count(head));
	return 0;
}

void create(node *list)
{
	printf("Input a number\n");
	printf("(Type -999 at end)\t");
	scanf("%d", &list -> no);	//CREATE CURRENT NODE

	if(list->no == -999) 
        {
          list->next = NULL;
          return;
        }

	else 
	{
		list->next = (node*)malloc(sizeof(node));
		create(list->next);
	}
	return;
}

void print(node *list)
{
	if(list->next)
	{
		printf("%d-->", list->no);

                if(list->next->next == NULL)
			printf("%d", -999);

		print(list->next);
	}
	return;
}

int count(node *list)
{
	if(list->next == NULL)
		return 0;
	else 
		return(1+count(list->next));
}
