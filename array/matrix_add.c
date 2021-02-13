/////////////////////////////////////////////////////////
//    ADDS TWO MATRIX INPUT FROM USERS

#include<stdio.h>

#define  MAXROW 10
#define  MAXCOL  10

int main()
{
  int arr1[MAXROW][MAXCOL] = {0}, arr2[MAXROW][MAXCOL] = {0};
  int r,c;

  printf("Enter array one ROW by ROW\n\t Hit -999 when finished\n");
  for(r = 0; r < MAXROW; r++)
  {
    for(c = 0; c < MAXCOL; c++)
    {
      scanf("%d", &arr1[r][c]);
      if(arr1[r][c] == -999) goto zen;
    }
  }
zen:
  printf("\nEnter array 2 ROW by ROW\n\t Hit -999 when finished\n");
  for(r =0; r < MAXROW; r++)
  {
    for(c = 0; c < MAXCOL; c++)
    {
      scanf("%d", &arr2[r][c]);
      if(arr2[r][c] == -999) goto ken;
    }
  }
ken:
  printf("\nThe sum is \n");
  for(r = 0; r < MAXROW; r++)
  {
    for(c = 0; c < MAXCOL; c++)
    {
      printf("%d\t", arr1[r][c] + arr2[r][c]);
    }
    printf("\n");
  }

  return 1;
}
