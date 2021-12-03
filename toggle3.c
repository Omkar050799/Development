

#include<stdio.h>

char Toggle(char c)

{
	if ((c >= 'a')&&(c <= 'z'))
	{
		return c-32;
	}
	else if ((c >= 'A')&&(c <= 'Z'))
	{
		return c+32;
	}
}

int main()
{
	char ch ='\n';
char cRet='\0';
	
	printf(" Enter Character : \n");
	scanf("%c",&ch);
	cRet=Toggle(ch);
	printf("Toggle Letter is : %c \n",cRet);
return 0;
}