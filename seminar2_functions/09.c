#include <stdio.h>

void bob(int n);

void alice(int n)
{
	n = 3 * n + 1;
	printf("%i\n", n);
	bob(n);
}

void bob(int n)
{
	if(n == 1)
		return;
	else if (n % 2 == 0)
	{
		n /= 2;
		printf("%i\n", n);
		bob(n);
	}
	else
	{
		alice(n);
	}
}

int main()
{
	int n;
	scanf("%i", &n);

	alice(n);
}