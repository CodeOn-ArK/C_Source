#include<stdio.h>

int main()
{
	int i=0;
	struct marks{
		        int sub1 ;
			int sub2 ;
			int sub3 ;
			int total ; //DECLARATION OF VARIABLE IN STRUCTURE
	} student[3] = {0,0,0,0,0,00,0,0,0,00,0,0,00,0,0}, total;
	printf("Enter syudent details serially\n");
	for(i=0; i<3; i++)
	{
		printf("Enter subject marks serially for student %d\n", i+1);
		scanf("%d 	%d	 %d",&student[i].sub1,&student[i].sub2,&student[i].sub3);
	}
	printf("\nThe students details are\n");
	printf("STUDENT     	    TOTAL\n");
	for(i=0; i<3; i++)
	{
		student[i].total = student[i].sub1 + student[i].sub2 + student[i].sub3;
		printf("student[%d]		%d\n", i+1, student[i].total);

		total.sub1 += student[i].sub1; 		total.sub2 += student[i].sub2; 
		total.sub3 += student[i].sub3; 		total.total += student[i].total;
	}

	printf("\nSUBJECT			TOTAL\n"); i =0;
	printf("subject[%d]		%d\n", i+1, total.sub1);
	printf("subject[%d]		%d\n", i+2, total.sub2);
	printf("subject[%d]		%d\n", i+3, total.sub3);

	printf("\nGRAND TOTAL: %d\n", total.total);
	return 0;
}
