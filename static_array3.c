
#include<stdio.h>
int main()
{
    int Arr[5];     // ststic memory allocation.  //Array of 5 elements
    int iSum=0,iCnt=0;
printf("enter number\n");

	for (iCnt=0;iCnt<5;iCnt++)
	{
		scanf("%d",&Arr[iCnt]);	
	}	
	
    iSum=iSum+Arr[0];
	iSum=iSum+Arr[1];
	iSum=iSum+Arr[2];
	iSum=iSum+Arr[3];
	iSum=iSum+Arr[4];
	
printf("Addition is : %d\n ",iSum);
    return 0;

}