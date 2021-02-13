////////////////////////////////////////////////////////////////
//            THIS PROG CREATES HISTOGRAM ON THE BASIS OF THE
//            USER INPUT DATA. HISTOGRAM ARE GRAPHS DEPICTING THE VALUE 
//            OF THE FIELD THROUGH BARS.
//            ENTER THE VALUE AT THE BEGINNING ANF WATCH THE FUN

#include<stdio.h>

int main()
{
  int gr[4], i=0;

  printf("Enter the data for respective group:\n");
  while(i<4)
  {
    printf("\nEnter the value for group %d\t", i+1);
    scanf("%d", &gr[i]);
    i++;
  }

  i = 0;
  for(int var =0 ; var < 4; var++,i++)
  {
    printf("\n\t\t|\n\t\t|\ngroup %d\t\t|", i+1);
    for(int var2 =0; var2 < gr[i]; var2++)
    {
      printf("*");
    }
    printf("(%d)", gr[i]);
  }
  printf("\n");
}
