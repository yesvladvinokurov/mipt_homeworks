#include <stdio.h>
#include <string.h>

int main()
{
	int point[2] = {0, 0};
	int n;

	scanf("%i", &n);

	for(int i = 0; i < n; ++i)
	{
		char dir[10];
		int move;
		scanf("%s%i", dir, &move);
		if(!strcmp(dir, "North"))
			point[1] += move;
		else if(!strcmp(dir, "South"))
			point[1] -= move;
		else if(!strcmp(dir, "East"))
			point[0] += move;
		else if(!strcmp(dir, "West"))
			point[0] -= move;

	}
	printf("%i %i\n", point[0], point[1]);

}