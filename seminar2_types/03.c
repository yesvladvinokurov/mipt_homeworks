#include <stdio.h>

float yearfrac(int year, int day)
{
	float days;
	if(year % 4)
		days = 365;
	else
		days = 366;

	return (day * 1.0) / days;
}

int main()
{
	int year;
	int day;

	scanf("%i%i", &year, &day);

	printf("%f\n", yearfrac(year, day));
}