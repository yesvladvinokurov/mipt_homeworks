#include <stdio.h>
#include <math.h>

size_t count_if(int* a, size_t n, int (*pred)(int a))
{
	size_t count  = 0;
	for(int i = 0; i < n; ++i)
	{
		if(pred(a[i]) < 0)
			count += 1;
	}

	return count;
}

int is_negative(int a)
{
	return a;
}

int is_even(int a)
{
	if(a % 2)
		return 0;
	else
		return -1;
}

int is_square(int a)
{
	if (ceil((double)sqrt(a)) == floor((double)sqrt(a)))
		return -1;
	else
		return 0;
}

int main()
{
	int a[] = {89, 81, 28, 52, 44, 16, -64, 49, 52, -79};
	printf("%zu\n", count_if(a, 10, is_negative)); // Должен напечатать 2
	printf("%zu\n", count_if(a, 10, is_even)); // Должен напечатать 6
	printf("%zu\n", count_if(a, 10, is_square)); // Должен напечатать 3
}