////////////////////////////////////////////////////////////////////////
//        THIS PROG FINDS OUT THE MINIMUM COST OF A GIVEN COMPONENT
//        THE COMPONENT EXPRESSION NEEDS TO BE A QUADRATIC EQ. 
//        IT STARTS FROM A NEGATICE VALUE (-100) AND INCREMENTS IN STEP
//        BY 0.1 WHEN THE GRAPH IS DECREASING IN NATURE. AND STOPS WHEN 
//        THE GRAPH STARTS TO RISE
//

#include<stdio.h>
#include<stdlib.h>

float equation(float, float, float, float);

int main()
{
  float a,b,c, eq, i=00.1;

  printf("Enter the coeffeciens a, b && c\n");
  scanf("%f %f %f", &a, &b, &c);
  
  eq = equation(a,b,c,-10);
  
  while(1)
  {
    if(eq > equation(a,b,c,-1+i))
    {
      eq = equation(a,b,c,-1+i);
      i += 0.1;
      continue;
    }
      printf("\nThe minimum value for the equation is %f at the point %f\n", eq, -1+i-0.1);
      exit(0);
  }

  return 0;
}

float equation(float a,float b, float c, float x)
{
  return(a*x*x + b*x + c);
}
