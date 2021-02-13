///////////////////////////////////////////////////////////////////////////////////////
//      THIS CODE MULTIPLIES TWO MATRIX OF SIZE MxN AND NxC
//      INPUT FROM USER

#include<stdio.h>

int main()
{
  int arr1[3][3], arr2[3][3], sum =0;
  int i=0, j=0, k=0;

  printf("Enter the 1st array row by row\n\n\t");
  for(i =0; i < 3; i++)
  {
    for(j = 0; j < 3; j++)
    {
      scanf("%d", &arr1[i][j]);
    }
  }

  printf("Enter the 2nd array row by row\n\n\t");
  for(i = 0; i < 3; i++)
  {
    for(j =0 ; j < 3; j++)
    {
      scanf("%d", &arr2[i][j]);
    }
  }

  printf("The product of two matrices are\n\n");
  for(i = 0; i < 3; i++)
  {
    for(j = 0, k = 0; j< 3; j++)
    {
      sum += arr1[i][j] * arr2[j][k];
      if(j == 2){
       j = -1;
       printf("%d\t", sum);
       sum = 0;
       if(k == 2) break;
       k++;
      }
    }
    printf("\n");
  }

  return 1;
}
