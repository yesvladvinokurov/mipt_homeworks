#include <stdio.h>
#include <string.h>

struct game
{
	char title[50];
	float rating;
};

typedef struct game Game;

void print_game(Game game)
{
	printf("%s, %.3f\n", game.title, game.rating);
}

int main()
{
	Game array[50];

	int n = 0;
	scanf("%i", &n);

	for(int i = 0; i < n; ++i)
	{
		char title[50];
		char temp;
		int number;
		scanf("%[^:]", title);
		scanf("%c", &temp);
		scanf("%i", &number);
		float sum = 0.0;
		int r;
		for(int j = 0; j < number; ++j)
		{
			scanf("%i", &r);
			sum += (float)r;
		}
		Game g = {"", (sum / number)};
		strcpy(g.title, title);
		array[i] = g;
		scanf("%c", &temp);
	}

	for(int i = 0; i < n; ++i)
		print_game(array[i]);
}