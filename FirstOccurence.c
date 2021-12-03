//Find First Occurence of Number From Array

#include<stdio.h>
#include<stdlib.h>

int BigCount(int Arr[], int iSize, int iNo)
  {
    int iCount = 0, i = 0;
    
    for(i = 0; i < iSize; i++)
      {
        if(Arr[i] == iNo)
          { 
            break;
          } 
      }
     if(i == iSize)
       {
          return -1;
       }
     else
       {
          return i;
       } 
  }

int main()
 {
   int *ptr = NULL;
   int iLength = 0, i = 0, iRet = 0, iNo = 0;
   
   printf("Enter Number of Element\n");
   scanf("%d",&iLength);
   
   ptr = (int *) malloc (iLength * sizeof(int));
   
   printf("Enter Elements:--\n");
     for (i = 0; i < iLength; i++)
        {
          printf("Enter %d Element:--",i + 1);
          scanf("%d",&ptr[i]);
        }
   printf("Enter Number of Element\n");
   scanf("%d",&iNo);   
   
   iRet = BigCount(ptr, iLength, iNo);
  
   if(iRet == -1)
     {
       printf("The Number is not present");
     }
   else
     {
       printf("First Occurence Of That Number is present at Index no %d ",iRet);
     } 
     
   free(ptr);
   return 0;
 }