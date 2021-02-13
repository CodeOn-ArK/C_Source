//////////////////////////////////////////////////////////////////////////////////
//    A TEST CONSISTING OF 5 QUESTIONS IS ADMINISTERED TO BATCH OF 3 STUDENTS
//    THE CORRECT ANSWERS ARE STORED IN AN ARRAY
//    THE STUDENT RESPONSES ARE STORED IN AN ARRAY
//    THE RESPONSE FOR EACH STUDENT IS EVALUATED AGAINST THE CORRECT ANSWER ARRAY

#include<stdio.h>

int main()
{
  int key[5], response[3][5], student_total[3];
  int var = 0, var2 = 0;

  printf("\nEnter the key for response evaluation\n");

  while(var2 < 5)
    scanf("%d", &key[var2++]);

  printf("\nEnter the response for the students\n");

  while(var < 3)
  {
    var2 = 0;
    while(var2 < 5)
      scanf("%d", &response[var][var2++]);
    var++;

    if(var == 3)
    {
      printf("\nThe student results are\n");

      var2 = 0;
      while(var2 < 3)
      {
        var = 0;
        int result = 0;

        printf("\nThe marks obtained by student %d is", var2 + 1);

        while(var < 5)
        {
          if(response[var2][var] == key[var])
            result++;
          var++;
        }
        printf("\t\t %d\n", result);
        var2++;
      }
      break;
    }
  }


  return 0;
}
