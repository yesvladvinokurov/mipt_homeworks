#include <stdio.h>

int main()
{
	int n, m;
	scanf("%i%i", &n, &m);

	int a[m];

	for (int j = 0; j < m; ++j)
	{
		a[j] = 0;
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			int p;
			scanf("%i", &p);
			a[j] += p;
		}
	}
	for (int j = 0; j < m; ++j)
	{
		printf("%i ", a[j]);
	}

	printf("\n");
}