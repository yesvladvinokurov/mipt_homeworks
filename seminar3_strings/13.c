#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int a;
	int b;
	char operator;

	if(argc != 4)
	{
		printf("Error: Wrong number of arguments!\nUsage: ./calc <number> <operator> <number>\n");
		exit(1);
	}

	for (int i = 0; i < strlen(argv[1]); ++i)
	{
		if(!isdigit(argv[1][i]))
		{
			printf("Error: Operands should be integers!\n");
			exit(1);
		}
	}

	sscanf(argv[1], "%i", &a);

	for (int i = 0; i < strlen(argv[3]); ++i)
	{
		if(!isdigit(argv[3][i]))
		{
			printf("Error: Operands should be integers!\n");
			exit(1);
		}
	}

	sscanf(argv[3], "%i", &b);

	sscanf(argv[2], "%c", &operator);

	if(operator == '+')
	{
		printf("%i\n", a + b);
	}
	else if(operator == '-')
	{
		printf("%i\n", a - b);
	}
	else if(operator == '*')
	{
		printf("%i\n", a * b);
	}
	else if (operator == '/')
	{
		if(b == 0)
		{
			printf("Error: Division by zero!\n");
			exit(1);
		}
		else
		{
			printf("%i\n", a / b);
		}
	}
	else
	{
		printf("Error: Invalid operator!\n");
		exit(1);
	}
}