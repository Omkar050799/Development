#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iSize)
  {
    int iSum = 0, i = 0;
    float fResult = 0.0f;
    
    for(i = 0; i < iSize; i++)
      {
        iSum = iSum + Arr[i];
      } 
	  
fResult=(float)iSum/(float)iSize;
      //fResult = iSum / iSize;
      return fResult;
  }

int main()
 {
   int *ptr = NULL;
   int iLength = 0, i = 0;
   float fRet = 0.0f;
   
   printf("Enter Number of Element\n");
   scanf("%d",&iLength);
   
   ptr = (int *) malloc (iLength * sizeof(int));
   
   printf("Enter Elements:--\n");
     for (i = 0; i < iLength; i++)
        {
          printf("Enter %d Element:-",i + 1);
          scanf("%d",&ptr[i]);
        }
        
   fRet = Average(ptr, iLength);
   
   printf("The Average is:--%.2f",fRet);       
 
   free(ptr);
   return 0;
 }