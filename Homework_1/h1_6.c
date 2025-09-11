#include <stdio.h>

int main()
{
	int n, m;
	scanf("%i%i", &n, &m);
	int sum = 0;

	for (int i = 1; i < n + 1; ++i)
	{
		for (int j = 1; j < m + 1; ++j)
		{
			if ((i + j) % 2)
			{
				sum -= (i * j);
			}	
			else
			{
				sum += (i * j);
			}
		}

	}
	printf("%i\n", sum);

}