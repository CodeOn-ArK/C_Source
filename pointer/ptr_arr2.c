#include<stdio.h>

int main()
{
  int arr[5];
  int i;
  for( i=0; i<5; i++)
  {
    arr[i] = i;
  }
  for(i=0; i<5; i++)
  {
    printf("stuff inside arr[%d] is %d\n", i,i);
  }
  i=0;
  while(i<5)
  {
    printf("Address of arr[%d] is %p\n",i, &arr[i]);
    i++;
  }
}
