/*
Accept The Number From User & And Display Numbers in reverce format .

input :- 5
ouput :- 5 4 3 2 1 

*/

#include<stdio.h>
  
 void Display(int iNo)
 {
	 int iCnt=0;
	 for(iCnt=iNo; iCnt>0; iCnt--)
	 {
		  printf("%d ",iCnt);
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