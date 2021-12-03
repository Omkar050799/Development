#include<stdio.h>

void swap(char *p,  char *q)
{
	char temp;
	temp = *p;
	*p = *q;
	*q =temp;
}

int main()
{
	char ch1 , ch2;
	
	printf("Enter First Character :");
	scanf("%c",&ch1);
	printf("Enter Second Character :");
	scanf(" %c",&ch2);
	
	printf("Before swapping character : %c %c \n",ch1,ch2);
	
	swap(&ch1,&ch2); //swap(100,200)
	
	printf("After sapping character :%c %c\n",ch1,ch2);
	return 0;
}