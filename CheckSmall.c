

#include<stdio.h>
#include<stdbool.h>

bool Checksmall(char c)

{
	if ((c >= 'a')&&(c <= 'z'))
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
	bRet=Checksmall(ch);
	
	if (bRet==true)
	{
		printf("it is a small:");
	}
	else
	{
		printf("it not small");
	}
	
	
	
return 0;
}