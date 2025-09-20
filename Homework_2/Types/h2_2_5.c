#include <stdio.h>
#include <math.h>

int main()
{
	int x1; 
	int y1;
	int r1;
	scanf("%i%i%i", &x1, &y1, &r1);

	int x2;
	int y2;
	int r2;
	scanf("%i%i%i", &x2, &y2, &r2);

	float l;

	l = pow(x1 - x2, 2) + pow(y1 - y2, 2);

	if(l < pow(r1 + r2, 2))
		printf("Intersect\n");
	else if(l > pow(r1 + r2, 2))
		printf("Do not intersect\n");
	else
		printf("Touch\n");
}