 #include<stdio.h>

 int CheckFrequency(char *Brr ,char ch)
 {
	 int iCnt = 0;
	 while(*Brr != '\0')
	 {
		 if(*Brr == ch)
		 {
			 iCnt++;
		 } 
		 Brr++;
	 }
	return iCnt;
 }

int main()
{
	char Arr[30];
	char cValue = '\0';
	int iRet=0;

	printf("Enetr The String : ");
	scanf("%[^'\n']s",Arr);

	printf("Enter The Character :");
	scanf(" %c",&cValue);

	iRet= CheckFrequency(Arr,cValue);

	printf("The Frequency Of The Charactewr Is : %d",iRet);

	return 0;
}