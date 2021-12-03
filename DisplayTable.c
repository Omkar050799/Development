/*
Accept The Number From User And Display That Number Of Table.

Input 5
Output : 5 10 15 20 25 30 35 40 45 50
*/

#include<stdio.h>
  
 void Display(int iNo)
 {
	 int iCnt=0;
	 
	 for(iCnt=1 ;iCnt<=10; iCnt++)
	 {
		 printf(" %d\n",iCnt * iNo );
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