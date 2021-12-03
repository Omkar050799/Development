
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
    iSum=Arr[0]+Arr[1]+Arr[2]+Arr[3]+Arr[04];

printf("Addition is : %d\n ",iSum);
    return 0;

}