//Write A program to check the String is palindrome or not.

#include <stdio.h>
#include<stdbool.h>

bool ChkPal(char *Str)
{
    char *End = NULL;
    End=Str;

    while(*End != '\0')
    {
        End++;
    }
    End--;

    while(Str < End)
    {   
          if(*Str != *End)
             {
                 break;
             }           
              Str++;
                   End--;
    }
             if(Str < End)
             {
               return false;
              }
             else
             {
                return true;
            }
    
}
int main()
{ 
    char Arr[30];
    bool bRet=false;
 
    printf("Enter The String :");
    scanf("%[^'\n']s",Arr);

bRet=ChkPal(Arr);         //function call

    if(bRet == true)
    {
        printf("The String Is Palindrome :");
    }
    else
    {
        printf("The String is Not Palindrome :");
    }

    return 0;
}