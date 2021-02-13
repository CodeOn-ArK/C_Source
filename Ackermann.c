////////////////////////////////////////////////////////////////////////////////////////////////
//  THIS PROG FINDS OUT THE ACKERMANN OF A NUMBER USING RECURSION
//  ACKERMANN IS DEFINED AS:
//
//              n+1,              for m = 0;
//  A(m,n) = {  A(m-1, 1),        for m > 0 && n =0;
//              A(m-1, A(m,n-1)), for m > 0 && n > 0

#include<stdio.h>

int ackermann(int, int);

int main()
{
  int m,n;

  printf("\nEnter the value of m && n\n");
  scanf("%d %d", &m ,&n);

  printf("\nThe ackermann of the value is %d\n",  ackermann(m,n));

  return 0;
}

int ackermann(int m, int n)
{
  if( m == 0)
    return n+1;
  else if(m > 0 && n == 0)
    return ackermann(m-1,1);
  else if(m > 0 && n > 0)
    return ackermann(m - 1, ackermann(m, n - 1));
}
