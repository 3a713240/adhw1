#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char x;
	for (x=65; x<=90; x++)
	{
		printf("%c ",x);
	}
	
	printf("\n");
	for (x=97; x<=122; x++)
	{
		printf("%c ",x);
	}
	printf("\n");
	system ("pause");
	return 0;
}
