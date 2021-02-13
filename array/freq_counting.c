/////////////////////////////////////////////////////////////////////////
//    THIS PROG OBTAINS A LIST OF 20 NUMERICAL VALUES AND SORTS THEM ON 
//    THE BASIS OF THEIR FREQUENCY IN GROUPS OF 10

#include<stdio.h>

int main()
{
  int array[20], i= 0, group[10] = {0}, temp =0;

  printf("\nEnter elements serially\n");
  while(i < 20)
  {
    scanf("%d", &array[i]);
    i++;
  }
  
  for(i = 0; i< 20; i++)
  {
    temp = array[i]/10;
    group[temp]++;
  }
  
  printf("GROUP\tRANGE\t\tFREQ\n");
  for(i =0 ; i< 9; i++)
  {
    printf("%d\t%d to %d\t%d\n", i+1, 10*i, 10*(i+1) - 1, group[i]);
  }
  
  return 0;
}
