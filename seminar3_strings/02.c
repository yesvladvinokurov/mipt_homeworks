#include <stdio.h>

int main()
{
	for(char i = 32; i < 127; ++i)
	{
		printf("Symbol: %c, Code: %hhi\n", i, i);
	}
}