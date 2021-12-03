

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char c)

{
	if ((c >= 'A')&&(c <= 'Z'))
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
	
	printf("Enter Character : \n");
	scanf("%c",&ch);
	bRet=CheckCapital(ch);
	
	if (bRet==true)
	{
		printf("it is a capital:");
	}
	else
	{
		printf("it not capital");
	}
	
	
	
return 0;
}