#include <stdio.h>
#include <math.h>
#define EPS 1e-10

int equal(double a, double b)
{
	double eps = EPS;
	if(((a < b) && (b - a) < eps) || ((b < a) && (a - b) < eps))
		return 1;
	else
		return 0;
}

int solve_quadratic(double a, double b, double c, double* px1, double* px2)
{
	if(equal(a, 0))
	{
		if(equal(b, 0))
		{
			if(equal(c, 0))
				return 3;
			else
				return 0;
		}
		else
		{
			*px1 = (-c) / b;
			return 1;
		}
	}

	double D = pow(b, 2) - 4 * a * c;

	if(equal(D, 0))
	{
		*px1 = (-b) / (2 * a);
		return 1;
	}

	else if(D > 0)
	{
		*px1 = ((-b) + pow(D, 0.5)) / (2 * a);
		*px2 = ((-b) - pow(D, 0.5)) / (2 * a);
		return 2;
	}
	else
		return 0;

}


int main()
{
	double a = 5.;
	double b = 3.0;
	double c = -26.0;

	double x1 = 0.0;
	double x2 = 0.0;

	double* px1 = &x1;
	double* px2 = &x2;

	solve_quadratic(a, b, c, px1, px2);

	printf("%f; %f\n", *px1, *px2);
}

