#include<stdio.h>
#include<stdbool.h>

bool CheckPalindrome(char *str)
{
	//char *start = NULL;
	char *end = NULL;
	//bool flag = true;
	//start = str;
	end = str;
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(str < end)
	{
		if(*str != *end)
		{
		//	flag = false;
			break;
		}
		str++;
		end--;
	}
	//return flag;
	if(str < end)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	char Arr[30];
	
	bool bRet = false;
 
	printf("Enter String : ");
	scanf("%[^\n]s",Arr);
	
	bRet= CheckPalindrome(Arr);
	if(bRet == true)
	{
		printf("its palindrome \n");
	}
	else
	{
		printf("its not palindrome \n");
	}
	return 0;
}