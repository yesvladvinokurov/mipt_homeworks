#include <stdio.h>

int main()
{
	char a;
	a = getchar();

	if((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
	{
		printf("Letter\n");
	}
	else if(a >= 48 && a <= 57)
	{
		printf("Digit\n");
	}
	else
	{
		printf("Other\n");
	}
}