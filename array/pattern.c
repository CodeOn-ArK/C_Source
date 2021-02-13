#include<stdio.h>
#include<stdlib.h>

#define CONVERTO (int)
/*
 *EXECUTE ANY ONE OF THE #DEFINES WITH -Dpattern or -D converter DURING GCC CALL
 *
 */
int main()
{
#ifdef pattern
  int c, d;
  char string[] = "CProgramming";
  printf("\n\n");
  printf("----------------------------\n");
  for(c = 0; c <= 11; c++)
  {
    d = c+ 1;
    printf("|%-12.*s|\n", d, string);
  }

  printf("|---------------------------\n");
  for(c = 11; c >= 0; c--)
  {
    d = c + 1;
    printf("|%-12.*s|\n",d ,string );
  }

  printf("----------------------------\n");
#endif

#ifdef converter
  char start, end;
  printf("\nEnter the character to start from\n");
  scanf("%c", &start);
  getchar();
  printf("\nenter the charater to end upto\n");
  scanf("%c", &end);

  for(int i = CONVERTO start; i < CONVERTO end; i++ )
  {
    printf("%c --> %d\t", (char)i, i);
  }


#endif
}
