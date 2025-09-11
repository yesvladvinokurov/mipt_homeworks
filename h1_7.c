#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%i%i%i", &a, &b, &c);
	int n;
	n = a + (c -(a % c));

	while (n <= b)
	{
		printf("%i ", n);
		n += c;
	}
	printf("\n");
}