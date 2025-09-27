#include <stdio.h>
#include <string.h>
#include <ctype.h>

char encrypt(char c, int k)
{
	if(isalpha(c))
		{
		if(islower(c))
			return('a' + (((c- 'a') + k) % 26));
		else
			return('A' + (((c - 'A') + k) % 26));
		}
		else
			return(c);
}

int main(int argc, char** argv)
{
	int k;
	char input[100];
	char output[100];
	char c;
	sscanf(argv[argc - 1], "%i", &k);
	sscanf(argv[1], "%s", input);
	sscanf(argv[2], "%s", output);

	FILE* f = fopen(input, "r");
	FILE* r = fopen(output, "a");

	while((c = fgetc(f)) != EOF)
	{
		fputc(encrypt(c, k), r);
	}
	fclose(input);
	fclose(output);
}