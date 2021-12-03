/* Accept the number from user in Decimal and display it into Binary format .*/

#include<stdio.h>
 
 void DisplayBinar(int iNo)
 {
	 int iDigit=0;
	while(iNo != 0) 
	{
		iDigit = iNo % 2;
		printf("%d\t",iDigit);
		iNo = iNo/2;
	}
 }
 int main()
 {
	 int iValue =0;
	 printf("Enter the Number :");
	 scanf("%d",&iValue);
	 
	 DisplayBinar(iValue);
	 return 0;
 }