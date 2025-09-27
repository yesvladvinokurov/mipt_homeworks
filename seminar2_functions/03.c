#include <stdio.h>

int is_even(int n)
{
	if (n % 2)
		return 0;
	else
		return 1;
}

void print_even(int start, int stop)
{
	for (int i = start; i < stop; ++i)
	{
		if (is_even(i))
			printf("%i ", i);
	}
}

int main()
{
	int a;
	int b;

	scanf("%i%i", &a, &b);

	print_even(a, b);

}