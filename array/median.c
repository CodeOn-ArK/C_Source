////////////////////////////////////////////////////////////////////////////////////
//  COMPUTES MEDIAN OF A LIST OF NUMBERS;
//  ALGORITM:
//  1) READ ITEMS INTO ARRAY
//  2) SORT THE ARRAY IN INCREASING ORDER
//  3) COMPUTE MEDIAN
//  MEDIAN IS THE MIDDLE VALUE OF AN ARRAY WITH ODD ELEMENTS 
//  AND AVERAGE OF MIDDLE 2 VALUES FOR AN ARRAY WITH EVEN ELEMENTS

#include<stdio.h>

void median(int *, int);

int main()
{
  int array[30];
  int r,c, i=0, flag = 0;

  printf("Enter the array\n\tenter -99 to exit\n");
  while(i != 29)
  {
    scanf("%d", &array[i++]);
    if(array[i - 1] == -99) { break; }
  }

  i = 0;
  while(1)
  {
    while(array[i + 1] != -99)
    {
      if(array[i+1] < array[i])
      {
        r = array[i+1];
        array[i+1] = array[i];
        array[i] = r;
        flag++;
      }
      i++;
    }
    if(flag == 0)
    {
      i = 0;
      while(array[i] != -99)
      {
        printf("%d\n", array[i]);
        i++;
      }
      break;
    }
    i = 0;
    flag = 0;
  }
  median(array, i);

  return 0;
}

void median(int *array,int length)
{
  if(length%2)
  {
    printf("\nThe median is %f\n",(float) array[length/2]);
  }
  
  else
  {
    printf("\nThe median is %f\n",(float) ((array[length/2] + array[(length/2) - 1])/2.0));
  }

}
