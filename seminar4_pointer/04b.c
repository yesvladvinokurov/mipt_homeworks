#include <stdio.h>

void mult2(int* p, size_t n)
{
	for(int i = 0; i < n; ++i)
	{
		p[i] *= 2;
	}
}

int main()
{
	int numbers[6] = {4, 8, 15, 16, 23, 42};

	mult2(numbers, 6);

	for(int i = 0; i < 6; ++i)
		printf("%i ", numbers[i]);
}