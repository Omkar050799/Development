// C,C++ program demonstrate difference between
// strncat() and strcat()
#include <stdio.h>
#include <string.h>

int main()
{

// Take any two strings
char src[30] = "santosh";
char dest1[30] = "dnyanoba";
char dest2[30] = "shinde";

printf("Before strcat() function execution, ");
printf("destination string : %s\n", dest1);        //dnyanoba
	
// Appends the entire string of src to dest1
strcat(dest1, src);

// Prints the string
printf("After strcat() function execution, ");
printf("destination string : %s\n", dest1);        //dnyanobasantosh

printf("Before strncat() function execution, ");
printf("destination string : %s\n", dest2);         //shinde
	
// Appends 4 characters from src to dest2    //here we give the size to dest2 to Append the only 4 size of to be print 
strncat(dest2, src, 4);                                                      //  Append means Attach
                                                                           
// Prints the string
printf("After strncat() function execution, ");
printf("destination string : %s\n", dest2);        // shindesant
	
return 0;
}