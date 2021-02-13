#include<stdio.h>
#include<math.h>

int main()
{
  float sum = 0, var, i=0;
  printf("Enter the value of the variable\n");
  scanf("%f", &var);
  while(i < 100)
  {
    sum += pow(var,i);
    i++;
  };

  printf("\nThe value for 1/(1-x) is %f\n", 1/(1-var));
  printf("\nThe value for the series is %f\n", sum);

  return 0;
}
