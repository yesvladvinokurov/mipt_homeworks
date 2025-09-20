#include <stdio.h>

enum shape {ROCK, PAPER, SCISSORS};

enum result {LOSS, DRAW, WIN};

void print_shape(enum shape a)
{
	switch(a)
	{
	case ROCK:
		printf("Rock\n");
		break;
	case PAPER:
		printf("Paper\n");
		break;
	case SCISSORS:
		printf("Scissors\n");
		break;
	default:
		break;
	}
}

void print_result(enum shape a)
{
	switch(a)
	{
	case LOSS:
		printf("Loss\n");
		break;
	case DRAW:
		printf("Draw\n");
		break;
	case WIN:
		printf("Win\n");
		break;
	default:
		break;
	}
}

enum result get_result(enum shape a, enum shape b)
{
	switch(a)
	{
	case ROCK:
		switch(b)
		{
		case ROCK:
			return DRAW;
		case PAPER:
			return LOSS;
		case SCISSORS:
			return WIN;
		default:
			break;
		}	
	case PAPER:
		switch(b)
		{
		case ROCK:
			return WIN;
		case PAPER:
			return DRAW;
		case SCISSORS:
			return LOSS;
		default:
			break;
		}	
	case SCISSORS:
		switch(b)
		{
		case ROCK:
			return LOSS;
		case PAPER:
			return WIN;
		case SCISSORS:
			return DRAW;
		default:
			break;
		}	
	default:
		break;
	}
}

enum shape get_strtength(enum shape s)
{
	switch(s)
	{
	case ROCK:
		return PAPER;
	case PAPER:
		return SCISSORS;
	case SCISSORS:
		return ROCK;
	default:
		break;
	}
}

int main()
{
	
}





