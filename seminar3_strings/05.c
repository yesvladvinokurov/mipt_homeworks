#include <stdio.h>
#include <ctype.h>

int main()
{
	char a;
	int sum = 0;
	a = getchar();
	while(isdigit(a))
	{
		sum += a - 48 ;
		a = getchar();
	}
	printf("%i\n", sum);
}