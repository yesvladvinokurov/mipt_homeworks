#include <stdio.h>

void print_binary(int n)
{
	if (n == 0)
		return;
	print_binary(n / 2);
	printf("%i", n % 2);

}

int main()
{
	int n;
	scanf("%i", &n);
	print_binary(n);
	printf("\n");
}