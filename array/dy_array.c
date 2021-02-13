/////////////////////////////////////////////////////////////////////////////////////
//  IMPLEMENTING DYNAMIC ARRAY

#include<stdio.h>
#include<string.h>

#if 0
int a[3][4] = {
                {1,2,3,4},
                {5,6,7,8},
                {9,10,11,12}
              };

int main()
{
  int *ptr, i = 0,j = 0;

  ptr = a ;

  while(j<3)
  {
    while(i<4)
    {
      printf("\n %p \t %d\n", ptr + i + 4*j, *(( ptr + 4*j) + i) );
      i++;
    }
  j++;
  i = 0;
  }

  return 0;
}

#endif

#if 1

char *str[3] = {
              "HELLO",
              "pointer",
              "bye"
};

int main()
{
  char **ptr;

  ptr = str;

  while(ptr < str +  3)
  {
    printf("%s\n",*(ptr++) );
  }

  return 0;
}

#endif
