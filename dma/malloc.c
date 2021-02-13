////////////////////////////////////////////////////////////////////////////////////////
//  ILLUSTRATES USE OF MALLOC

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int *ptr, size, i=0;

  printf("\nEnter the size of table\n");
  scanf("%d", &size);

  if(!(ptr = malloc(size * sizeof(int))))
  {
    printf("\nMEMORY SHORTAGE!!\n");
    exit(EXIT_FAILURE);
  }

  printf("\nEnter the value of table\n");
  while(i < size)
  {
    scanf("%d", ptr++);
    i++;
  }

  printf("\nThe table is\n**********************************************************\n");
  while(i > 0)
  {
    printf("\nvalue %d at address %p\t%p", *ptr, --ptr, &ptr);
    i--;    
  }

  return 0;
}
