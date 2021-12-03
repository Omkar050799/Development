//Check Number is There Or Not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckNo(int Arr[],int iSize,int Num)
{
	int i=0;
	bool flag = false;

	for (i = 0; i < iSize; i++)
	{
		 if (Arr[i] == Num)
		 {
			flag = true;
			 break;
		 }
	}
	return flag;	
}

 int main()
 {
   int *ptr = NULL;
   int iLength = 0, i = 0,Num=0;
   bool bRet=false;
   
   printf("Enter Number of Element\n");
   scanf("%d",&iLength);
   
   ptr = (int *) malloc (iLength * sizeof(int));
   
   printf("Enter Elements:--\n");
     for (i = 0; i < iLength; i++)
        {
          printf("Enter %d Element:-\n",i + 1);
          scanf("%d",&ptr[i]);
        }
		   printf("Enter Element to be Search\n");
 		  scanf("%d",&Num);

		 bRet = CheckNo(ptr, iLength,Num);
		if(bRet==true)
		{
			printf("Number is there : ");
		}
		else
		{
			printf("Number is not there:");
		}
        
   free(ptr);
   return 0;
 }