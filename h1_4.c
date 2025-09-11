#include <stdio.h>
#include <limits.h>
int main()
{
	int n;
	scanf("%i", &n);
	int max = INT_MIN;
	int c;
	for (int i = 0; i < n; ++i)
	{
		int a;
		scanf("%i", &a);
		if (a > max)
		{
			max = a;
			c = 1;
		}
		else if (a == max)
		{
			++c;
		}

	}
	printf("%i %i\n", max, c);
}