///////////////////////////////////////////////////////////////
//          THIS CODE IS USING 333ARIABLE FOR 
//          PRINTING THE NUMBER TRIANGLE

#include<stdio.h>
#include<math.h>

int main()
{
  int field, temp = 0 ,var ;

  printf("\nEnter field value\n");
  scanf("%d", &field);

 // var = field;
  while(field-temp >= 0)
  {
    var = field-temp;
    while(var >= 0)
    {
      printf("  ");
      var--;
    }
   
    for( var = -1*temp ; var <= temp  ; var++)
    {
      printf("%d ", abs(var));
    }
    temp++ ;
    printf("\n");
  }

  return 1;
}
