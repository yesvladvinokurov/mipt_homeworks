#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define BUFER_SIZE 1000000


int check_format(int strings[2],char str[])
{
	if(!isdigit(str[0]))
	{
		printf("Error: Wrong lines format!\n");
		return 1;
	}

	int flag = 0;

	char t[100];
	int j = 0;

	for(int i = 0; i < strlen(str); ++i)
	{
		if(str[i] == ':')
		{
			if(flag == 0)
			{
				flag = 1;
				t[j] = 0;
				sscanf(t, "%i", &strings[0]);
				j = 0;
				continue;
			}
			else
			{
				printf("Error: Wrong lines format!\n");
				return 1;
			}
		}

		if(isdigit(str[i]))
		{	
			t[j] = str[i];
		}

		++j;
	}

	t[j] = 0;
	sscanf(t, "%i", &strings[1]);

	if(!flag)
	{
		strings[1] +=  1;
		strings[0] = strings[1] - 1;
	}

	if (strings[0] >= strings[1])
	{
		printf("Error: Wrong lines format!\n");
		return 1;
	}
	else
	{
		printf("%i %i\n", strings[0], strings[1]);
		return 0;
	}

}

int main(int argc, char** argv)
{
	if(argc != 4)
	{
		printf("Error: Wrong number of arguments!\nUsage: ./line_extractor <a.txt> <b.txt> <lines>\n");
		exit(1);
	}

	FILE* a = fopen(argv[1], "r");
	if(a == NULL)
	{
		printf("Error: File %s does not exist!\n", argv[1]);
	}

	int strings[2];

	if(check_format(strings, argv[3]))
	{
		exit(1);
	}

	FILE* b = fopen(argv[2], "w");

	char line[BUFER_SIZE];

	for(int i = 1; i < strings[1]; ++i)
	{
		fgets(line, BUFER_SIZE, a);
		if(i >= strings[0])
		{
			fputs(line, b);
		}
	}

	fclose(a);
	fclose(b);
}