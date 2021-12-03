#include<stdio.h>
#include<stdbool.h>
typedef unsigned int UINT;

bool CheckBit(UINT iNo,UINT iPos1,UINT iPos2)
{
	   
	UINT iMask =  0x00000001;
	//check 21 st bit is ON or OFF
	
//	0000 0000 0000 0000 0000 0000 0000 0001
//  0    0    0    0    0    0    0    15
//	       0 x 0 0 0 0 0 0 F
	iMask =iMask << (iPos -1);
	UINT iResult = 0;
	
	if(iPos <1 )|| (iPos >32)
	{
		
	}
	
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
	UINT iValue =0,Bit = 0;
	
	 printf("Enter the Number :");
	 scanf("%d",&iValue);
	 
	 printf("Enter Position :");
	 scanf("%d",&Bit);
	 
	bRet=CheckBit(iValue,Bit);
	
	if(bRet == true)
	{
		printf("  bit is ON \n");
	}
	else
	{
		printf("  bit is OFF");
	}
	  
	 return 0;
 }