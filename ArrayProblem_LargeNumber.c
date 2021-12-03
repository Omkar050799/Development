//Find Large Number From Array
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iSize)
{
int i=0,iCnt=0,LargeNo=0;
	
	for(i=0;i<iSize;i++)
	{
		if(LargeNo < Arr[i])
		{
			LargeNo = Arr[i];
		}
	}
	return LargeNo;
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
        
   iRet = Maximum(ptr, iLength);
   
   printf("number of element are: %d",iRet);       
   free(ptr);
   return 0;
 }