

#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char c)

{
	if ((c >= '0')&&(c <= '9'))
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
	char ch ='\n';
	bool bRet=false;
	
	printf(" Enter Character : \n");
	scanf("%c",&ch);
	bRet=CheckDigit(ch);
	
	if (bRet==true)
	{
		printf("it is a Digit:");
	}
	else
	{
		printf("it non Digit");
	}
	
	
	
return 0;
}