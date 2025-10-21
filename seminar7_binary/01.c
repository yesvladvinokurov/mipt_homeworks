#include <stdio.h>


int main()
{
	int a = 0x11223344;
	int b = 65535;
	int c = -1;
	int array[3] = {10, 2000, 65535};
	char str[8] = "Hello";
	float x = 1.0f;

	unsigned char* ap = (unsigned char*)array;
	for(int i = 0; i < ((3 * sizeof(int)) / sizeof(char)); ++i)
		printf("%x ", ap[i]);
	printf("\n");
}
