#include <stdio.h>
#include <ctype.h>

int main()
{
	char a;
	a = getchar();

	if(isalpha(a))
	{
		printf("Letter\n");
	}
	else if(isdigit(a))
	{
		printf("Digit\n");
	}
	else
	{
		printf("Other\n");
	}
}