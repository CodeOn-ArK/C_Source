#include<stdio.h>
#include<math.h>

#define LAMBDA    0.01

int main()
{
  int time, curve;
  printf("Enter time reqd\n");
  scanf("%d", &time);

  while(time > 0)
  {
    curve = (int)(50*exp(-1*LAMBDA*time) + 0.5);
    while(curve > 0)
    {
      printf("*");
      curve--;
    }
    printf("\n");
    time -= 9;
  }

  return 0;
}
