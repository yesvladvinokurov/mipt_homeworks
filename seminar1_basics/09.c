#include <stdio.h>

int main()

{
	int a[1000];
	int n;
	scanf("%i", &n);
	for (int i = 0; i < n; ++i)
		scanf("%i", &a[i]);

	int d = 0;

	for (int i = 0; i < n; ++i)
	{
		if (a[i] < 0)
			++d;
		else
		    a[i - d] = a[i];
	}

    n -= d;
    
	for (int i = 0; i < n; ++i)
	{
		printf("%i ", a[i]);
	}

	printf("\n");
}