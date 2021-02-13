////////////////////////////////////////////////////////////////////////////////////////////
//  MARKS OBTAINED BY STUDENT TO BE DISPLAYED IN A TABULATED FORM

#define STUDENTS  5
#define SUBJECTS  4

#include<string.h>
#include<stdio.h>

int main()
{
  char name[STUDENTS][20];
  int marks[STUDENTS][SUBJECTS + 1];

  printf("Input students names && their marks in four subjects\n");

  get_list(name,marks,STUDENTS,SUBJECTS);
  get_sum(marks,STUDENTS,SUBJECTS + 1);

  printf("\n");

  printf_list(name, marks, STUDENTS, SUBJECTS + 1);
  printf("\nRanked List\n");
  print_list(name, marks, STUDENTS, SUBJECTS + 1);
}

/*
 *INPUT STUDENT NAME AND MARKS
 */
get_list(char *string[], int array[][SUBJECTS + 1], int m, int n)
{
  int i, j, (*rowptr)[SUBJECTS + 1] = array;
  
  for(i = 0;i < m; i++)
  {
    scanf("%s", string[i]);

    for(j = 0; j < SUBJECTS; j++)
      scanf("%d", &(*(rowptr + i)[j]) );
  }
}
/*
 * COMPUTE TOTAL MARKS OBTAINED BY EACH STUDENT
 */
get_sum(int array[][SUBJECTS + 1], int m, int n)
{
  int i, j, (*rowptr)[SUBJECTS + 1] = array;

  for(i = 0; i < m; i++)
  {
    (*(rowptr + i))[n-1] = 0;
    for(i = 0; j < n-1; j++)
    {
      (*(rowptr + i))[n-1] += (*(rowptr + i))[j];
    }
  }
}

/*
 *PREPARE RANK LIST BASED ON TOTAL MARKS
 */
get_rank_list(char *string[], int array[][SUBJECTS + 1], int m, int n)
{
  int i, j, k, (*rowptr)[SUBJECTS + 1] = array;
  char *temp;
  
  for(i = 1; i<= m-1; i++)
  {
    for(j = 1; j <= m-1; j++)
    {
      swap_string(string[j-1], string[j]);

      for(k = 0; k < n; k++)
      {
        swap_int( &(*(rowptr + j-1))[k], &(*(rowptr + j))[k]);
      }
    }
  }
}

/*
 * PRINTF OUT THE RANKED LIST
 */
print_list(char *string[], int array[][SUBJECTS + 1], int m, int n)
{
  int i, j, (*rowptr)[SUBJECTS + 1] = array;
  for(i = 0;i < n; i++)
  {
    printf("%-20s", string[i]);
    for(j = 0; j < n; j++)
    {
      printf("%5d", (*(rowptr + i))[j]);
      printf("\n");
    }
  }
}

/*
 * EXCHANGE OF INTEGER VALUES
 */
swap_int(int *p, int *q)
{
  int temp;
  temp = *p;
  *p = *q;
  *q = temp;
}

/*
 * EXCHANGE OF STRINGS
 */
swap_string(char s1[], char s2[])
{
  char swaparea[256];
  int i;

  for(i = 0; i < 256; i++)
  {
    swaparea[i] = '\0';
  }

  i = 0;

  while(s1[i] != '\0' && i < 256)
  {
    swaparea[i] = s1[i];
    i++;
  }
  i = 0;

  while(s2[i] != '\0' && i < 256)
  {
    s1[i] = s2[i];
    s1[++i] = '\0';
  }
  i = 0;

  while(swaparea[i] != '\0')
  {
    s2[i] = swaparea[i];
    s2[++i] = '\0';
  }
}
