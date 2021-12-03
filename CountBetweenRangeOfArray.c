//Count The Number That Are In The Range Of 50 to 100

#include<stdio.h>
#include<stdlib.h>

int CountBetweenRange(int Arr[],int iSize)
{
	int i=0,iCnt=0;
	
	for(i=0; i < iSize; i++)
	{
		if((Arr[i]>50 && Arr[i]<100))
		{
	    	iCnt++;
		}
	}
   return iCnt;
}

int main()
 {
   int *ptr = NULL;
   int iLength = 0, i = 0;
   int iRet =0;
   
   printf("Enter Number of Element\n");
   scanf("%d",&iLength);
   
   ptr = (int *) malloc (iLength * sizeof(int));
   
   printf("Enter Elements:--\n");
     for (i = 0; i < iLength; i++)
        {
          printf("Enter %d Element:-",i + 1);
          scanf("%d",&ptr[i]);
        }
        
   iRet = CountBetweenRange(ptr, iLength);
   
   printf("number of element are: %d",iRet);       
   free(ptr);
   return 0;
 }