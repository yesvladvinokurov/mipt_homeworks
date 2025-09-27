#include <stdio.h>

int main()
{
	char a;
	a = getchar();

	if((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
	{
		printf("Letter\n");
	}
	else if(a >= '0' && a <= '9')
	{
		printf("Digit\n");
	}
	else
	{
		printf("Other\n");
	}
}