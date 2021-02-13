#include<stdio.h>

int main()
{
  int terms;
  printf("Enter the number of terms to be displayed\n");
  scanf("%d", &terms);

  while(terms > 0)
  {
    printf("x%d + ", terms);
    terms--;
    if(terms  == 0)
    {
      printf("1\n");
    }
  }

  return 0;
}
