#include<stdio.h>

int print(int);

int main()
{
  int item;
  printf("Enter the value\n");
  scanf("%d", &item);
  print(item);
}

int print(int n)
{
  int x =0;
  if(n == 0) return 0;

  else{
    printf("%d ", n);
    x = print(n-1);
    printf("%d\n", x);
    return x;
  }

}
