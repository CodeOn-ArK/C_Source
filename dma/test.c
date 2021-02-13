#include<stdio.h>
#include<stdlib.h>

static int count;

struct list{
  int no;
  struct list* next;
};
typedef struct list node;

void insert(node**);
void display(node*);
void delete(int, node*);

int main()
{
  int item;
  char ans;

  node *head;
  insert(&head);
  display(head);
  printf("\nDo you wanna delete any node?\n");
  scanf("%c", &ans);
  if(ans == 'Y' || ans == 'y')
  {
    printf("Enter the node item\n");
    scanf("%d" , &item);
    delete(item, head);
  }
}
void insert(node **ptr)
{
  *ptr = (node*)malloc(sizeof(node));
  printf("\nEnter node element\nEnter -999 to exit\t");
  scanf("%d", &(*ptr)->no);

  if((*ptr)->no == -999)
  {
      (*ptr)->next = NULL;
      return;
  }
  else
  {
      insert(&((*ptr)->next));
  }
}

void display(node *ptr)
{
  printf("%d-->", ptr->no);

  if(ptr->next == NULL) return ;
  else
      display(ptr->next);
}

void delete(int item, node *ptr)
{
  node* find_addr(int item, node* ptr);
  ptr = find_addr(item, ptr);
  printf("Node found at %d", count);
  printf("\nnode is %d\n", ptr->no);

}

node* find_addr(int item, node* ptr)
{
  count++;
  if(ptr->no == item) return ptr;
  else find_addr(item,ptr->next);
  if(ptr->next == NULL) 
  {
    fprintf(stderr, "Item not found");
    exit(EXIT_FAILURE);
  }
}
