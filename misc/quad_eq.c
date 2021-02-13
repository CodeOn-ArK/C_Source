#include<stdio.h>
#include<math.h>

int main()
{
  float a,b,c, discri, root1,root2;
  printf("Input values of a,b and c\n");
  scanf("%f %f %f", &a, &b, &c );

  discri = pow(b,2) - 4*(a)*(c);
  root1 = (-b + discri)/(2*a);

  printf("\nThe root is %f\n", root1);
}
