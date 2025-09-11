#include <stdio.h>
int main()
{
	int n;
	scanf("%i", &n);
	int max = n;
	int c = 1;
	printf("%i", n);
	while (n != 1)
	{
		c += 1;
		if (n % 2)
		{
			n = 3 * n + 1;
		}
		else 
		{
			n = n / 2;
		}
		if (n > max)
		{
			max = n;
		}
		printf(" %i", n);
	}
	printf("\nLength = %i, Max = %i\n", c, max);
}