#include <stdio.h>

int main()
{
	int n;
	scanf("%i", &n);

	for (int i = 1; i < n + 1; ++i)
	{
		printf("%3i -> %3i -> %3i\n", i, i * i, i * i * i);
	}
}