

#include<stdio.h>

void  Count(char *str)
{
		int Ccount=0,Scount=0;
		
		while( *str != '\0')
		{
			if((*str >='A') && (*str <= 'Z'))
			{
				Ccount++;
			}
			if((*str >='a') && (*str <= 'z'))
			{
				Scount++;
			}
			str++;
		}
	printf("Small Letter Are %d \n",Scount);
	printf("Capital Letter Are %d \n",Ccount);
}

int main()
{
	char Arr[20];

	printf(" Enter String : \n");
	scanf("%[^\n]s",Arr);
	
	Count(Arr);
	
return 0;
}