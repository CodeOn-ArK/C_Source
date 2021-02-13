//////////////////////////////////////////////////////////////////////////////////////////
//  STRUCTURE TO DEFINE COMPLEX NUMBERS

#include<stdio.h>

typedef struct{
  double img;
  double real;
}cmplx;

cmplx *add(cmplx c1, cmplx c2)
{
  cmplx *c3;
  c3->img = c1.img + c2.img;
  c3->real = c1.real + c2.real;
  return(c3);
}

cmplx *multiply(cmplx c1, cmplx c2)
{
  cmplx *c3;
  c3->real  = (c1.real)*(c2.real) - (c1.img)*(c2.img);
  c3->img  = (c1.real)*(c2.img) + (c1.img)*(c2.real);
  return(c3);
}

cmplx display(cmplx *c)
{
  printf("\nThe real part is \t %f && the img part is \t %f\n", c->real, c->img);
}

int main()
{
  cmplx c1, c2, *c3;
  
  printf("Enter the values for complex number 1\n");
  scanf("%lf %lf", &c1.real, &c1.img);

  printf("Enter the values for complex number 2\n");
  scanf("%lf %lf", &c2.real, &c2.img);

  printf("\nThe sum is\n");
  c3 = add(c1,c2);
  display(c3);

  printf("\nThe product is\n");
  c3 = multiply(c1,c2);
  display(c3);

  return 1;
}
