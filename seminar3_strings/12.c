#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
	int n;

	sscanf(argv[2], "%i", &n);

	for(int i = 0; i < n; ++i)
		printf("%s ", argv[1]);
	printf("\n");
}