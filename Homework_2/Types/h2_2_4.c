#include <stdio.h>
#include <math.h>

float pi(int n)
{
	float res;
	for(int i = 1; i < n + 1; ++i)
	{
		res += (pow(-1.0, (i + 1.0))) / (2.0 * i - 1.0);
	}
	return res * 4.0;
}

int main()
{
	int n;
	scanf("%i", &n);

	printf("%f\n", pi(n));

}