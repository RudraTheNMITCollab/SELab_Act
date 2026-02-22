#include <stdio.h>
#include <string.h>

void main()
{
	char givenstr[20];
	char chstack[20];
	int cntr = 0;
	// int cntr2 = 0;
	printf("Enter a string: ");
	scanf("%s" , givenstr);
	for(int i = (strlen(givenstr)-1);i>=0;i--)
	{
		chstack[cntr] = givenstr[i];
		cntr = cntr + 1;
	}
	
	for(int j = 0;j<(strlen(givenstr));j++)
	{
		printf("%c" , chstack[j]);	
	}
}
