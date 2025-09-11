#include <stdio.h>

int main()
{
	int n;
	scanf("%i", &n);
	int a[n];

	for (int i = 0; i < n; ++i)
	{
		int x;
		scanf("%i", &x);
		printf("%i ", x);
		a[i] = x;
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%i ", a[i]);
	}
	printf("\n");
}