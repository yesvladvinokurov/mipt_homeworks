#include <stdio.h>
#define MAX 100

void multiply(float A[MAX][MAX], float B[MAX][MAX], float C[MAX][MAX], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			C[i][j] = 0;
			for (int k = 0; k < n; ++k)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
}

void read(float M[MAX][MAX], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			scanf("%f", &M[i][j]);
		}

	}
}

void printm(float M[MAX][MAX], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%f ", M[i][j]);
		}

		printf("\n");

	}
}



int main()
{
	int n;
	scanf("%i", &n);

	float A[MAX][MAX];
	read(A, n);

	scanf("%i", &n);

	float B[MAX][MAX];
	read(B, n);

	float C[MAX][MAX];

	multiply(A, B, C, n);

	printm(C, n);
}