#include<stdio.h>

typedef unsigned int UNIT;

UNIT strlenX (char *str)   //strlen
{
	int iCnt =0;
	
	if(str == NULL)
		return 0;
	
	while(*str != '\0')
	{
		iCnt++;
		str++;
	}
	return iCnt;
}
int main()
{
	char Arr[20];
	UNIT iRet=0;
	printf("Enter the name : \n");
	scanf("%[^\n]s",Arr);
    iRet = strlenX(Arr);   //
	printf("lemgth of string is :%d\n",iRet);
	return 0;
}