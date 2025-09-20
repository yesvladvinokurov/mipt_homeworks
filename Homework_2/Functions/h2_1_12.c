#include <stdio.h>
#define MAX 100

void assign(float A[MAX][MAX], float B[MAX][MAX], int n)
{
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			A[i][j] = B[i][j];
		}
	}
}

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

void power(int A[MAX][MAX], int C[MAX][MAX], int n, int k)
{
	float B[MAX][MAX];

	assign(B, A, n);
	assign(C, A, n);

	for(int i = 0; i < k - 1; ++ i)
	{
		multiply(A, B, C, n);
		assign(B, C, n);
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
	int n = 3;

	int A[MAX][MAX];
	read(A, n);

	int k;

	scanf("%i", &k);

	int C[MAX][MAX] = {0};

	power(A, C, n, k);

	printm(C, n);


}