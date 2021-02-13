#include<stdio.h>

int main()
{
  int a;
  printf("Enter the decimal number\n");
  scanf("%d", &a);

  while(a>0)
  {
    printf("%d", a%2);
    a /= 2;
  }
  printf("\n");
  printf("hello\r");
  fflush(stdout);
  char d ;
  scanf("%c", &d);
  return 0;
}
