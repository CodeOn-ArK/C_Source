///////////////////////////////////////////////////////////////////////////////////////////////
//  COUNTS NUMBER OF WORDS IN THE GIVEN PARA

#include<stdio.h>

int main()
{
  char para[555550];
  int i =0, line = 0, word = 0;;

  printf("\nEnter the text \nwhen completed press return\n");
  scanf("%[^\n]", para);

  while(para[i] != '\0')
  {
    if(para[i] == ' ')
      word++;
    if(para[i] == '.')
      {
        if(para[i +1] != ' ') word++;
        line++;
      }
    if(para[i] == ',' && para[i+1] != ' ') word++;
    i++;
  }

  printf("\nThe number of lines are %d and %d words\n", line, word);
}
