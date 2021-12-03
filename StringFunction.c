#include<stdio.h>

void Display(char Brr[])
{
	printf("name is %s \n",Brr);
}
int main()
{
	char Arr[30];

printf("Enter your name : \n");
scanf("%[^'\n']s",Arr);  
// regular expression

printf("Your name is : %s \n",Arr);

Display(Arr);
	return 0;
}

