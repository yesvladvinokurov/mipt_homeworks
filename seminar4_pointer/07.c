#include <stdio.h>

int exchange(int* pa, int b)
{
	int t = *pa;
	*pa = b;
	return t;
}

int main()
{
	int a = 10;
	printf("%i\n", exchange(&a, 20));  // Напечатает 10
	printf("%i\n", a);                 // Напечатает 20
}