//check 21 st bit is ON or OFF

#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	   
	UINT iMask = 0x00100000;//check 21 st bit is ON or OFF
	
	UINT iResult = 0;
	iResult = iNo & iMask;
	
	if(iResult == iMask)
	{
		return true;
	}
	else
	{
		return false;
	}
}

 int main()
 {
		bool bRet = false;
	UINT iValue =0;
	
	 printf("Enter the Number :");
	 scanf("%d",&iValue);
	 
	bRet=CheckBit(iValue);
	
	if(bRet == true)
	{
		printf("21 bit is ON \n");
	}
	else
	{
		printf("21 bit is OFF");
	}
	  
	 return 0;
 }