#include<stdio.h>

int main()
{
  printf("Enter the number of rows\n");
  int r,i=0;

  scanf("%d", &r);
  printf("\n");

  i =r;

  while(r>0)
  {
    while(i>0)
    {
      printf("%d\t", i--);
    }
    printf("\n");
    r--;
    i=r;
  }
  return 0;
}
