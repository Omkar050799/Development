/*
input :- 4    4

# # # #
* * * * 
# # # #
* * * *
*/

#include<stdio.h>

int Display(int iRow,int iCol)
{
 int iCnt=0,jCnt=0;
	for(iCnt=1;iCnt<=iRow;iCnt++)
	{
		for(jCnt=1;jCnt<=iCol;jCnt++)
		{
			if((iCnt % 2)==0)
			{
				printf("* ");
			}
			else
			{
				printf("# ");
			}
		}
		printf("\n");
	}
}

int main()
{
	int iValue1= 0,iValue2=0;
	
	 printf("Enter The Rows :");
	 scanf("%d",&iValue1);
	 
	  printf("Enter The Columns:");
	   scanf("%d",&iValue2);
	   
	Display(iValue1,iValue2);
return 0;
}