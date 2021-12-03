/*
Accept The Number From User & And Display In Alter Format .

input :- 6
ouput :- * # * # * #
*/

#include<stdio.h>
  
 void Display(int iNo)
 {
	 int iCnt=0;
	 for(iCnt=1 ;iCnt<=iNo; iCnt++)
	 {
	 if(iCnt % 2==0)
	 {
		 printf(" # ");
	 }
	else 
	{
		printf("*");
	}
	 }
	 }
  int main()
  { 
	  int iValue=0;
	  
	  printf("Enter The Number :");
	  scanf("%d",&iValue);
	  
	  Display(iValue);	
	  return 0;
  }