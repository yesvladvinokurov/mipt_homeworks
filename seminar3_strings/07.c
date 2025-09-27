#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encrypt(char* str, int k)
{
	for(int i = 0; i < strlen(str); ++i)
	{
		if(isalpha(str[i]))
		{
			if(islower(str[i]))
			printf("%c", 'a' + (((str[i] - 'a') + k) % 26));
		else
			printf("%c", 'A' + (((str[i] - 'A') + k) % 26));
		}
		else
			printf("%c", str[i]);
	}

	printf("\n");
}

int main()
{
	int k;
	char a[100];

	scanf("%i ", &k);
	scanf("%99[^\n]", a);

	encrypt(a, k);
}