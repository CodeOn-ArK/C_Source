/////////////////////////////////////////////////////////////////////////////////////
//  FINDS OUT THE AREA UNDER A CURVE USING INTEGRATION APPROACH
//  ENTER THE FUNCTION YOU WANT


#include<stdio.h>
#include<math.h>

void input(void);
float integrate();
float area_func(float, float);
void display(int);
void clear(void);

float x1, x2;

typedef struct{
  int power;
  int coeff;
}term;
term s[5] = {0}, *ptr;

int main()
{
  input();  

  printf("\n The area of the wave is %f\n", integrate());

  return 1;
}

void input(void)
{
  printf("\nEnter the function MAX UPTO 5 TERMS : \n");
  ptr = s;
  int i = 0;
  char choice;

  while(1)
  {
    printf("\nEnter the %d th term's power\n", i) ;
    scanf("%d", &ptr->power);

    printf("\nEnter the %d the term's coeffiecient\n", i);
    scanf("%d", &ptr->coeff);

    ptr++;
    i++;

    printf("\ndo you want to enter tmore terms?(y/n)\n");
    //clear() ; 
    getchar();
    choice = getchar();
    if(choice == 'n') break;
  }

  printf("\nEnter the limits of integration\t starting from x1 ending at x2\n");
  scanf("%f %f", &x1, &x2);
  
  display(i);
}

float integrate()
{
  //FUCNTION IS X^2 + 1
  float area = 0;
  while(x1 < x2) 
 {
   area += area_func(x1, x1+0.000001);
   x1 += 0.000001;
 }
  return area;
}

float area_func(float a, float b)
{
  ptr = s;
  float sum = 0,sum1 = 0, sum2 = 0, area = 0 ;
  while(ptr < s + 5)
  {
   sum1 += (ptr->coeff)*(pow(a,ptr->power));
   sum2 += (ptr->coeff)*(pow(b,ptr->power));

   if(ptr->power == 0 && (++ptr)->power == 0)
     break;
  }

  sum += sum1 + sum2;
  
  area += 0.5*(sum)*(b - a);

  return area;
}

void display(int i)
{
  //printf("\nThe terms are \n");
  
  printf("hel");
  ptr = s;

  printf("hel");
  printf("addr of ptr %p and s =  %p && s + 5 %p", ptr, s, s+5);
  while(ptr < s + 5)
  {/*
    if(ptr->power == 0)
    { 
      printf("%dX", ptr->coeff );
      printf("^%d ",ptr->power);
      break;
    }*/

   printf("%dX", ptr->coeff );
   printf("^%d + ", ptr->power);   

   ptr++;
  }

}

void clear(void)
{
  while(getchar() != '\n');
}
