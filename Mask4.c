 #include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
	   
	UINT iMask = 0x000000F;
	//check 21 st bit is ON or OFF
	
//	0000 0000 0000 0000 0000 0000 0000 1111
//  0    0    0    0    0    0    0    15
//	       0 x 0 0 0 0 0 0 F
	
	UINT iResult = 0;
	iResult = iNo & iMask;
	
	if(iResult == iMask )
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
		printf("4th bit is ON \n");
	}
	else
	{
		printf("4th bit is OFF");
	}
	  
	 return 0;
 }