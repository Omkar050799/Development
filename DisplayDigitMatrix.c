/*
input :- 3  4
output :- 
 1 1 1 1
 2 2 2 2
 3 3 3 3
 */

#include<stdio.h>

int Display(int iRow,int iCol)
{
 int iCnt=0,jCnt=0;
	for(iCnt=1;iCnt<=iRow;iCnt++)
	{
		for(jCnt=1;jCnt<=iCol;jCnt++)
		{
			//printf("* ",jCnt);
			 printf("%d ",iCnt);
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
