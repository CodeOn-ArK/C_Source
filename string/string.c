////////////////////////////////////////////////////////////////////////////////////
//    IMPLEMENTING VARIOUS STRING FUNCTIONALITY 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  char *string, string1[10];

  string = "HELLO";
  //for(int i=0; string1[i-1] != '\n'; i++)
   // scanf("%c", &string1[i]);

  printf("%s\n %s", string, string1);

  printf("Enter the text\n\n");
  scanf("[^\n]%s", string);
  printf("\n%s", string);

  printf("\nstring length is %llu \n", strlen(string));

  printf("\nconcatenated text is %s\n", strcat(string1, string));

  return 0;
}
