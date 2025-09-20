#include <stdio.h>

void reverse(int array[], int size)
{
	for(int i = 0; i < size / 2; ++i)
	{
		int copy;
		copy = array[i];
		array[i] = array[size - 1 - i];
		array[size - 1 - i] = copy;
	}
}

int main()
{
	int n;
	scanf("%i", &n);

	int a[1000];

	for(int i = 0; i < n; ++i)
		scanf("%i", &a[i]);

	reverse(a, n);

	for(int i = 0; i < n; ++i)
		printf("%i ", a[i]);

}