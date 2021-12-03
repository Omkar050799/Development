#include<stdio.h>

int main()
{
	char Arr[11]="Marvellous";

	printf(" %c\n",Arr[0]); // M
	printf(" %c\n",Arr[5]);  // 
	printf(" %c\n",Arr[9]);


	printf(" %s\n",Arr[0]);
	printf(" %s\n",Arr[5]);
	printf(" %s\n",Arr[9]);

	printf("%s",Arr);
		printf("%s",Arr+5);
	printf("%s",Arr+9);

}