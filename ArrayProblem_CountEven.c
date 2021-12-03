//Count Even Numbers Form Array

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iSize)
{
	int i=0,iCnt=0;
	
	for(i=0;i<iSize;i++)
	{
		if((Arr[i] % 2) ==0)
		{
			iCnt++;
		}
	}
	return iCnt;
}

int main()
 {
   int *ptr = NULL;
   int iLength = 0, i = 0, iRet=0;
   
   printf("Enter Number of Element\n");
   scanf("%d",&iLength);
   
   ptr = (int *) malloc (iLength * sizeof(int));
   
   printf("Enter Elements:--\n");
     for (i = 0; i < iLength; i++)
        {
          printf("Enter Element %d :-",i + 1);
          scanf("%d",&ptr[i]);
        }
        
   iRet = CountEven(ptr, iLength);
   
   printf("number of element are: %d ",iRet);       
   free(ptr);
   return 0;
 }