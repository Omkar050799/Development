//4th Bit Is On Or Off

#include<stdio.h>
#include<stdbool.h>

bool CheckBit(int iNo)
{
	int iMask = 0x00000008;
	int iResult = 0;
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
	int iValue =0;
	
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