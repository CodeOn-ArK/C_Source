#define MAXGIRLS  4
#define MAXITEMS  3

#include<stdio.h>

int main()
{
  int value[MAXGIRLS][MAXITEMS];
  int girl_total[MAXGIRLS], item_total[MAXITEMS];
  int i,j, grand_total;

  /*
   * reading of values and computing girl total
   */

  printf("Input data\n");
  printf("Enter the values one at a time, row-wise\n\n");

  for(i=0 ; i < MAXGIRLS; i++)
  {
    girl_total[i] = 0;
    for(j = 0; j< MAXITEMS; j++)
    {
      scanf("%d", &value[i][j]);
      girl_total[i]  +=  value[i][j];
    }
  }

  /*
   * computing item_total
   */

  for(j=0; j< MAXITEMS; j++)
  {
    item_total[j] = 0;
    for(i=0; i<MAXGIRLS; i++)
    {
      item_total[j] = item_total[j] + value[i][j];
    }
  }

  /*
   * computing grand total
   */
  grand_total = 0;
  for(i=0; i<MAXGIRLS ; i++)
  {
    grand_total += girl_total[i];
  }

  /*
   * printing reults
   */

  printf("\nGIRLS TOTAL\n\n");

  for(i=0 ; i< MAXGIRLS; i++)
  {
    printf("salesgirl[%d] = %d\n", i+1, girl_total[i]);
  }
  printf("\nITEM TOTAL\n\n");
  for(j=0; j<MAXITEMS; j++)
  {
    printf("Item[%d] = %d\n", j+1, item_total[j]);
  }
  printf("\nGrand_Total = %d\n", grand_total);
}
