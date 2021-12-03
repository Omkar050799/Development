/*
Accept The Number From User & And Display That Number Of Stars .

input :- 5
ouput :- * * * * *

*/

#include<stdio.h>
  
 void Display(int iNo)
 {
	 int iCnt =0;
	 for(iCnt=0; iCnt<=iNo; iCnt++)
	 {
		 printf(" * ");
	 } 
 }
  int main()
  {
	  int num=0;
	  
	  printf("Enter The Number :");
	  scanf("%d",&num);
	  
	  Display(num);	
	  return 0;
  }