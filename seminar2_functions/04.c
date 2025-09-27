#include <stdio.h>

int sum_of_digits(int n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int sum_of_digits_rec(int n)
{
	int sum = 0;
	if (n % 10 == n)
		sum += n;
	else
		sum += sum_of_digits_rec(n / 10) + (n % 10);

	return sum;

}

int main()
{
	int n;
	scanf("%i", &n);

	printf("%i\n", sum_of_digits(n));
	printf("%i\n", sum_of_digits_rec(n));

}