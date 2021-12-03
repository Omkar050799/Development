//Difference between Large And Small Number From Array

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize)
{
int i=0,iCnt=0,Diff=0,MaximumNo=0,MinimumNo=Arr[0];   

	
	for(i=0; i<iSize; i++)
    {
        if(MaximumNo < Arr[i])
        {
          MaximumNo=Arr[i];
        }
        else if ( MinimumNo > Arr[i])
        {	
           MinimumNo=Arr[i];
        }
	}
	Diff = MaximumNo - MinimumNo;
	
	return Diff;
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
        
   iRet = Difference(ptr, iLength);
   
   printf("Difference Between Maximum Number And Small NUmber Is : %d",iRet);       
   free(ptr);
   return 0;
 }