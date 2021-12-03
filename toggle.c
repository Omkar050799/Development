

#include<stdio.h>

char smallCapital(char c)

{
	if ((c >= 'a')&&(c <= 'z'))
	{
		return c-32;
	}
}

int main()
{
	char ch ='\n';
char cRet='\0';
	
	printf(" Enter Character : \n");
	scanf("%c",&ch);
	cRet=smallCapital(ch);
	printf("Capital Letter is : %c \n",cRet);
return 0;
}