//////////////////////////////////////////////////////////////////////////////////////////
//  CREATE A STRUCTURE TO STORE STUDENT DATA

#include<stdio.h>

#if 1
typedef struct
{
  int roll;
  char name[30];
  unsigned long int phone_number;
}stud;
#endif

int main()
{
  stud student = {13, "HELhellelelLO W\rORLD!", 9747UL};
  stud *ptr;

  printf("%d %s %ld\n", student.roll, student.name, student.phone_number);
  ptr = &student;

  printf("%d %s %ld\n", ptr->roll, ptr->name, ptr->phone_number);

  return 1;

}
