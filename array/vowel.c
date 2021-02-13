////////////////////////////////////////////////////////////////////////////////////////
//  COUNTS THE NO. OF VOWELS IN THE USER STRING

#include<string.h>
#include<stdio.h>

int main()
{
  char str[30];
  int count = 0, i = 0;

  printf("\nEnter the string\n");
  scanf("%[^\n]", str);

  while(str[i] != '\0')
  {
    if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
      count++;
    i++;
  }

  printf("\nThere are %d many vowels\n", count);

  return 0; 
}
