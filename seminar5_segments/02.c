#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float* get_geometric_progression(float a, float r, int n)
{
	float* array = (float*)malloc(n * sizeof(float));
	for(int i = 0; i < n; ++i)
	{
		array[i] = a * pow(r, i);
	}
	return array;
}

void print_progression(float* array, int n)
{
	for(int i = 0; i < n; ++i)
		printf("%.2f; ", array[i]);
	printf("\n");
}

int main()
{
	float a = 1.0;
	float r = 3.0;
	int n = 10;

	float* progression = get_geometric_progression(a, r, n);
	print_progression(progression, n);
	free(progression);
}