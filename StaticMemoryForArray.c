/*
Accept number from user and perform addition of all numbers 
*/

#include<stdio.h>
int main()
{
    int Arr[8];     // ststic memory allocation.  //Array of 8 elements
    int iSum=0;
printf("enter number\n");

    scanf("%d",&Arr[0]);
     scanf("%d",&Arr[1]);
      scanf("%d",&Arr[2]);
       scanf("%d",&Arr[3]);
        scanf("%d",&Arr[4]);
		 scanf("%d",&Arr[5]);
		  scanf("%d",&Arr[6]);
		   scanf("%d",&Arr[7]);
		   
    iSum=Arr[0]+Arr[1]+Arr[2]+Arr[3]+Arr[04]+Arr[05]+Arr[05]+Arr[06]+Arr[07];

printf("Addition is : %d\n ",iSum);
    return 0;

}
