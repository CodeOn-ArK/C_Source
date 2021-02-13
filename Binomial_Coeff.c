////////////////////////////////////////////////////////////
//        THIS CODE PRINTS OUT THE BINOMIAL COEFFICIENT 
//        TABLE TO A VALUE OF N GIVEN BY THE USER AS 
//        INPUT
//
#include<stdio.h>

int fact(int);

int main()
{
  int N, R = 0;
  
  printf("Enter the value of N\n");
  scanf("%d", &N);
  printf("N/R");

  while(R != 10)
  {
   printf("\t%d", R);
   R++;
  }
  printf("\n-----------------------------------------------------------------------------------\n");
  R =  N;
  while(N >= 0)
  {
    printf("%d\t", N);
    while(R >= 0)
    {
      int var = fact(N)/(fact(R) * fact(N-R));
      printf("%d\t", var);
      R--;
    }

    printf("\n");
    N--;
    R = N;
  }
  return 0;
}

int fact(int n)
{
  if(!n) return 1;
  return(n*fact(n-1));
}
