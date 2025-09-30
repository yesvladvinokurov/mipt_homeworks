#include <stdio.h>
#include <math.h>

void cube(float* px)
{
	*px = pow(*px, 3);
}

int main()
{
	float x = 12.3;
	float* px = &x;
	
	cube(px);

	printf("%f\n", x);
}