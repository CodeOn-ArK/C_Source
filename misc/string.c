#include<stdio.h>

int main()
{
  char c[5];
  printf("Enter the character\n");
  for(int i=0; i<5; i++)
  scanf("%c", &c[i]);
 
  for(int i=0; i<5; i++)
  printf("The character is %c\n", c[i]);

  return 1;
}
