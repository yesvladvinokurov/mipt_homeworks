#include <stdio.h>
#include <string.h>

int main()
{
	char a[100];
	char flag = 1;

	scanf("%99s", a);

	char len = strlen(a);

	for(int i = 0; i < len / 2; ++i)
	{
		if(a[i] != a[len - 1 - i])
		{
			flag = 0;
			break;
		}
	}
	if(flag)
		printf("Yes\n");
	else
		printf("No\n");
}