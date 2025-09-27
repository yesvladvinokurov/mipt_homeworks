#include <stdio.h>
#include <string.h>

void trim_after_first_space(char str[])
{
	sscanf(str, "%s", str);
}

int main()
{
	char a[] = "Cats and Dogs";
	printf("%s\n", a);
	trim_after_first_space(a);
	printf("%s\n", a);
}