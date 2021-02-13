/////////////////////////////////////////////////////////////////////////////////////////
//  SORTS A LIST OF NAMES IN USER DEFINED ORDER

#include<string.h>
#include<stdio.h>

void display(char [][10], int);
void ascending(char[][10], int);

int main()
{
  char string_table[10][10];
  int i;

  printf("\nHow many strings you wanna enter?\n");
  scanf("%d", &i);

  printf("\nEnter the string\n");
  for(int var = 0; var < i; var++)
  {
   scanf("%s", string_table[var]);
  }

  ascending(string_table, i);

  printf("\nThe strings are\n");
  display(string_table, i);

  return 1;
}

void ascending(char table[][10], int n)
{
  char string[10];
  int i = 1, flag = 0;

  while(i != n)
  {
    if(strcmp(table[i], table[i-1]) < 0)
    {
      strcpy(string, table[i]);
      strcpy(table[i], table[i-1]);
      strcpy(table[i-1], string);
      flag++;
    }
    i++;
    if((i == n) && !flag) break;
    if((i ==  n) && flag) { i = 0; flag = 0;}
  }
}

void display(char table[][10], int n)
{
  for(int i =0; i < n; i++ )
  {
    puts(table[i]);
  }
}

