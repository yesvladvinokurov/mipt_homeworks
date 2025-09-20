#include <stdio.h>

int data[1000];

int trib(int n)
{
	if (n < 3)
		return (n / 2);
	if (data[n] == 0)
		data[n] = trib(n - 1) + trib(n - 2) + trib(n - 3);

	return data[n];
}

int main()
{
	int n;
	scanf("%i", &n);

	printf("%i", trib(n));
	printf("\n");
}