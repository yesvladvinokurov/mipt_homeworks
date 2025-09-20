#include <stdio.h>
#include <math.h>

const double step = 1e-2;
const double eps = 1e-10;

double gamma(double x)
{
	double g = 0;
	long double S = 1;
	double t = 0;
	while(S > eps)
	{
		S = (pow(t, x - 1) * exp(-t) + pow(t + step, x - 1) * exp(-(t + step))) * step / 2.0;
		g += S;
		t += step;
	}

	return g;
}

int main()
{
	double x;
	scanf("%lf", &x);

	printf("%lf\n", gamma(x));
}