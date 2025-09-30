#include <stdio.h>

struct cat
{
	char x;
	size_t y;
};

struct dog
{
	size_t y;
	char x;
};

struct mouse
{
	char x;
	char y;
	size_t z;
};

struct rat
{
	char x;
	size_t y;
	char z;
};

struct fox
{
	char x;
	struct mouse y;
};

int main()
{
	printf("Char, Size: %zu, Align: %zu\n", sizeof(char), _Alignof(char));
	printf("Int, Size: %zu, Align: %zu\n", sizeof(int), _Alignof(int));
	printf("Size_t, Size: %zu, Align: %zu\n", sizeof(size_t), _Alignof(size_t));
	printf("Int[10], Size: %zu, Align: %zu\n", sizeof(int[10]), _Alignof(int[10]));
	printf("Int*, Size: %zu, Align: %zu\n", sizeof(int*), _Alignof(int*));
	printf("Struct cat, Size: %zu, Align: %zu\n", sizeof(struct cat), _Alignof(struct cat));
	printf("Struct dog, Size: %zu, Align: %zu\n", sizeof(struct dog), _Alignof(struct dog));
	printf("Struct mouse, Size: %zu, Align: %zu\n", sizeof(struct mouse), _Alignof(struct mouse));
	printf("Struct rat, Size: %zu, Align: %zu\n", sizeof(struct rat), _Alignof(struct rat));
	printf("Struct fox, Size: %zu, Align: %zu\n", sizeof(struct fox), _Alignof(struct fox));
}
