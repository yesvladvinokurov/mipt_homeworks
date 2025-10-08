#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* concat(const char* a, const char* b)
{
	char* new = (char*)malloc((strlen(a) + strlen(b) + 1) * sizeof(char));
	strcpy(new, a);
	strcat(new, b);
	return new;
}

int main()
{
	char a[] = "cat";
	char b[] = "dog";

	char* ab = concat(a, b);
	printf("%s\n", ab);
	free(ab);
}