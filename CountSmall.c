

#include<stdio.h>

char SmallCount(char *str)
{
		int count=0;
		
		while( *str != '\0')
		{
			if((*str >='a') && (*str <= 'z'))
			{
				count++;
			}str++;
		}
		return count;
}


int main()
{
	char Arr[20];
int iRet=0;
	
	printf(" Enter String : \n");
	scanf("%[^\n]s",Arr);
	
	iRet=SmallCount(Arr);
	
	printf("Small Letter is : %d \n",iRet);
return 0;
}