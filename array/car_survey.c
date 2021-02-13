/////////////////////////////////////////////////////////////////////
//    THIS PROG INPUTS THE VALUE OF NO OF CARS USAGE IN VARIOUS CITY
//    AND THEN DISPLAYS A TABLE ACCORDING TO THE INPUT DATA 

#include<stdio.h>

int main()
{
  int car, freq[4][5] = {{0},{0},{0},{0}}, i;
  char city;

  printf("\nEnter the data uniformly, \n\tfirst city code followed by company popularity\nEnter the letter X to exit\n");
  for(int i=0;; i++)
  {
    scanf("%c", &city);
    if(city == 'X') break;

    scanf("%d", &car);
    switch(city)
    {
      case 'M' : freq[0][car]++;
                 break;
      case 'D' : freq[1][car]++;
                 break;
      case 'C' : freq[2][car]++;
                 break;
      case 'B' : freq[3][car]++;
                 break;
    }
  }

  for(int i=0; i<50; i++)
  {
    printf("__");
  }
  printf("\nCITY\tAmbassador\tFiat\tDolphin\t\tMaruti\n");

  for(int i=0; i<50; i++)
  {
  printf("--");
  }
  i=1;

  while(i < 5) 
  {
    switch(i)
    {
      case 1 : printf("\nMumbai");
               break;
      case 2 : printf("\nCalcutta");
               break;
      case 3 : printf("\nDelhi");
               break;
      case 4 : printf("\nMadras");
               break;
    }
    for(int j =1; j<4 ; j++)
    {
      printf("%7d\t", freq[i-1][j]);
    }
    i++;
  }

  printf("\n");
}
