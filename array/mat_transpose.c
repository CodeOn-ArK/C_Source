////////////////////////////////////////////////////////////////////////////////////
//    THIS CODE TRANSPOSES A GIVEN MATRIX FROM USER INPUT

#include<stdio.h>

int main()
{
  int arr1[3][3] = {0}, trans[3][3] = {0};
  int i,j;

  printf("Enter the array Row by Row\n\n");
  for(i = 0; i < 3; i++ )
  {
    for(j =0; j < 3; j++)
    {
      scanf("%d", &arr1[i][j]);
    }
  }

  printf("The Entered matrix is \n\n");
  for(i = 0; i < 3; i++)
  {
    for(j = 0; j < 3; j++)
    {
      printf("%d\t", arr1[i][j]);
      trans[i][j] = arr1[j][i];
    }
    printf("\n");
  }

  printf("The transpose is\n\n");
  for(i = 0; i < 3; i++)
  {
    for(j = 0; j < 3; j++)
    {
      printf("%d\t", trans[i][j]);
    }
    printf("\n");
  }

  return 0;
  
}
