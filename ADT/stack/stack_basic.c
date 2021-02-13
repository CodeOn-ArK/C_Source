#include<stdio.h>
#include<stdlib.h>

#define MAX_STRUCT_SIZE 100 // max stack size

typedef struct{
  int key;
  //other fields
}element;

int isEmpty(void);
int isFull(void);
int push(int item);
int pop(int item_no);
void display();

element stack[MAX_STRUCT_SIZE];
int top = -1;

int main()
{
  int option = 0, item = 0;
  while(option != 5) 
  {
    printf("\t\t \nSTACK OPTIONS");
    printf("\n1. Push\t2. Pop\n3. Display\t4. Pop n elements\n5. EXIT\n\n");
    scanf("%d", &option);
    switch(option)
    {
      case 1 :printf("\nEnter element to be inserted\n");
              scanf("%d", &item);
              push(item);
              break;

      case 2 : pop(1);
               break;
      
      case 3 : display();
               break;

      case 4 : printf("\nEnter elements to be entered\n");
               scanf("%d", &item);
               pop(item);
               break;

      case 5 : exit(1);
    }
  }
  return 0;
}

int isEmpty(void)
{
  if(top == -1)
  {
    fprintf(stderr, "\nSTACK IS EMPTY");
    exit(EXIT_FAILURE);
  }
  else
    return(1);
}

int isFull(void)
{
  if(top == MAX_STRUCT_SIZE - 1)
  {
    fprintf(stderr, "\nSTACK IS FULL");
    exit(EXIT_FAILURE);
  }
  else {
    return 0;  
  }
}

int push(int item)
{
  if(!isFull())
  stack[++top].key =  item;

  return 1;
}

int pop(int item)
{
  do{
    top--;
  }while(item--);

  printf("\n%d number of elements have been deleted\n", item);
}

void display()
{
  while(!isEmpty())
    if(!isFull() && !isEmpty())
    {
      printf("%d", stack[top--].key);
    }
}
