#include<stdio.h>

unsigned int fun (char *str)   ////
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
	int iRet=0;
	printf("Enter the name : \n");
	scanf("%[^\n]s",Arr);
	iRet = fun(Arr);   ////////////
	printf("lemgth of string is : %d \n",iRet);
	return 0;
}