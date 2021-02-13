/////////////////////////////////////////////////////////////////////////////////////
//    THIS CODE INTERCHANGES THE SELECTED ROWS AND/ OR COLUMNS

#include<stdio.h>
#include<stdlib.h>

#define ROWS 3
#define COLUMNS 3

int main()
{
  int arr[ROWS][COLUMNS];
  int r =0 ,c = 0, count =0;
  char opt = 'o';

  printf("Enter the matrix \n\n");
  while(r < 3)
  {
    while(c < 3)
    {
      scanf("%d", &arr[r][c]);
      c++;
    }
    r++;
    c = 0;
  }

  while(1)
  {
    printf("\nWhat do you want to interchange ROWS(r) OR COLUMNS(c)\n");
    scanf("%c %c", &opt, &opt);
    if(opt == 'r')
    {
      printf("Which two ROWS you'd like to interchange?\n");
      scanf("%d %d", &r, &c); 

      while(count < 3)
      {
        int var;
        var = arr[r][count];
        arr[r][count] = arr[c][count];
        arr[c][count] = var;
        count++;
      }
    }

    else if(opt == 'c')
    {
      printf("Which two COLUMNS you'd like to interchange?\n");
      scanf("%d %d", &r, &c); 

      while(count < 3)
      {
        int var;
        var = arr[count][r];
        arr[count][r] = arr[count][c];
        arr[count][c] = var;
        count++;
      }
    }
    
    r=0; c=0; count = 0;
    while(r < 3)
    {
      while(c < 3)
      {
        printf("%d\t", arr[r][c]);
        c++;
      }
      r++;
      c=0;
      printf("\n");
    }

    printf("\nWould you like to continue?\n");
    scanf("%c %c", &opt , &opt);
   if(opt == 'n' || opt == 'N') exit(EXIT_SUCCESS);
  }
}
