#include <stdio.h>

int main()
{
	int n;

	scanf("%i", &n);

	int nums[n];
	int sums[n];

	for (int i = 0; i < n; ++i)
	{
		scanf("%i", &nums[i]);

		int sum = 0;
		int num = nums[i];

		while(num > 0)
		{
			sum += num % 10;
			num = num / 10;
		}
		sums[i] = sum;
	}

	for (int j = 0; j < n; ++j)
	{
		int min_index = j;
		for (int i = j + 1; i < n; ++i)
		{
			if (sums[i] < sums[min_index])
				min_index = i;

		}
		int temp_s = sums[j];
		int temp_n = nums[j];

		sums[j] = sums[min_index];
		sums[min_index] = temp_s;

		nums[j] = nums[min_index];
		nums[min_index] = temp_n;
	}

	for (int i = 0; i < n; ++i)
	{
		printf("%i ", nums[i]);
	}


}