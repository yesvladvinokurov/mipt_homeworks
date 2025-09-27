#include <stdio.h>
#include <string.h>

void safe_strcpy(char a[], size_t size, const char b[])
{
	if(size > strlen(b) + 1)
	{
		strcpy(a, b);
	}
	else
	{
		for(int i = 0; i < size - 1; ++i)
		{
			a[i] = b[i];
		}
		a[size - 1] = 0;
	}
}

int main()
{
	char a[10] = "Mouse";
	char b[50] = "LargeElephant";

	safe_strcpy(a, 10, b);
	printf("%s\n", a);
}