#include<stdio.h>

int main()
{
  int a; char d;
  printf("The number is \n");
  scanf("%d", &a);

  printf("%d\r", a);
  //printf("\r%d", 10);
  scanf("%c", &d);
  printf("%c", d);
  return 0;
}
