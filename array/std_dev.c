/////////////////////////////////////////////////////////////////////////////////////
//  THIS CODE MEASURES THE STANDARD DEVIATION
//  s = sqrt(variance)

#include<stdio.h>
#include<math.h>

float mean(int *, float);
float std_dev(float);
float variance(int*,float , float);

int main()
{
  int items[50];
  float item_no, sum, means, vari;
  printf("How many items u wanna enter?\n");
  scanf("%f", &item_no);

  printf("\nEnter %f items\n", item_no);
  for(int var = 0; var < item_no; var++)
  {
    scanf("%d", &items[var]);
  }

  means = mean(items, item_no);

  vari = variance(items, means, item_no);

  std_dev(vari);

  return 0;
}

float mean(int *item, float item_no)
{
  float var = 0, sum = 0;

  while(var < item_no)
  {
    sum += item[(int)var++];
  }

  return (sum/item_no);
}

float variance(int *items, float mean, float item_no)
{
  float i =0, sum = 0, variance;
  
  while(i < item_no)
  {
    sum += pow(items[(int)i++] - mean, 2);
  }

  variance = sum/item_no;

  return variance;
}

float std_dev(float var)
{
  printf("\nThe standard deviation is %f\n", sqrt(var));

  return 0;
}
