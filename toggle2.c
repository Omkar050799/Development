
#include<stdio.h>

char Capitalsmall(char c)

{
	if ((c >= 'A')&&(c <= 'Z'))
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
	cRet=Capitalsmall(ch);
	printf("Capital Letter is : %c \n",cRet);
return 0;
}