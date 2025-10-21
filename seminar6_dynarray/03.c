#include <stdio.h>

int main()
{
#if defined COUNT
	int n = COUNT;
	for(int i = 1; i < COUNT + 1; ++i)
			printf("%i ", i);
		printf("\n");
#else
		printf("No Count!\n");
#endif
}