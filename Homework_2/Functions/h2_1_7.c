#include <stdio.h>

int count_even(int array[], int n)
{
	int count = n;
	for (int i = 0; i < n; ++i)
		count -= array[i] % 2;
	return count;
}

int main()
{
	int n;
	int a[1000];

	scanf("%i", &n);

	for (int i = 0; i < n; ++i)
		scanf("%i", &a[i]);

	printf("%i\n", count_even(a, n));
}