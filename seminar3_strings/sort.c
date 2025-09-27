#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	char arr[argc - 1][100];

	for(int i = 1; i < argc; ++i)
	{
		strcpy(arr[i - 1], argv[i]);
	}
	char t[100];

	for (int i = 0; i < argc - 1; ++i)
	{
		for(int j = 0; j < argc - 1; ++j)
		{
			if(strcmp(arr[j], arr[j + 1]) < 0)
			{
				strcpy(t, arr[j]);
				strcpy(arr[j], arr[j + 1]);
				strcpy(arr[j + 1], t);
			}
		}
		printf("%s ", arr[argc - 2 - i]);
	}
	printf("\n");
}