#include <stdio.h>

int main()
{
	char a[100];
	char b[100];
	char flag_a = 1;
	char flag_b = 1;

	scanf("%99s", a);
	scanf("%99s", b);

	for(int i = 0; i < 100; ++i)
	{
		if(a[i] && flag_a)
			printf("%c", a[i]);
		else
			flag_a = 0;

		if(b[i] && flag_b)
			printf("%c", b[i]);
		else
			flag_b = 0;
		if(!(flag_a || flag_b))
		{
			printf("\n");
			break;
		}
	}
}