#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void* a, const void* b)
{
    const char* pa = *(const char**)a;
    const char* pb = *(const char**)b;
    return strcmp(pa,pb);
}

char** get_test_strings()
{
	char** p = (char**)malloc(4 * sizeof(char*));
	p[0] = (char*)malloc((strlen("Cat") + 1) * sizeof(char));
	strcpy(p[0], "Cat");
	p[1] = (char*)malloc((strlen("Mouse") + 1) * sizeof(char));
	strcpy(p[1], "Mouse");
	p[2] = (char*)malloc((strlen("Elephant") + 1) * sizeof(char));
	strcpy(p[2], "Elephant");
	p[3] = NULL;
	return p;
}

void print_strings(FILE* stream, char** string_array)
{
	int i = 0;
	while(string_array[i])
	{
		fprintf(stream, "%s\n", string_array[i]);
		++i;
	}
}

char** load_lines(const char* filename)
{
	FILE* f = fopen(filename, "r");
	int number_of_strings = 1;
	char c;
	while ((c = fgetc(f)) != EOF)
    {
    	if(c == '\n')
    		number_of_strings += 1;
    }

    char** p = (char**)malloc((number_of_strings + 1) * sizeof(char*));

    fseek(f, 0, SEEK_SET);

    int* temp = (int*)malloc(number_of_strings * sizeof(int));
    int string_length = 0;
    int string_num = 0;
	while ((c = fgetc(f)) != EOF)
    {
    	if(c == '\n')
    	{
    		temp[string_num] = string_length;
    		string_length = 0;
    		string_num += 1;
    	}
    	else
    		string_length += 1;
    }

    for(int i = 0; i < number_of_strings; ++i)
    {
    	p[i] = (char*)malloc((temp[i] + 1) * sizeof(char)); 
    }

    fseek(f, 0, SEEK_SET);

    int pos = 0;
    string_num = 0;
	while ((c = fgetc(f)) != EOF)
    {
    	if(c == '\n')
    	{
    		p[string_num][pos] = 0;
    		pos = 0;
    		string_num += 1;
    	}
    	else
    	{
    		p[string_num][pos] = c;
    		pos += 1;
    	}
    }
    p[string_num] = NULL;

    free(temp);
    fclose(f);

    return p;
}

void destroy_strings(char*** p_string_array)
{
	int i = 0;
	while((*p_string_array)[i])
	{
		free((*p_string_array)[i]);
		++i;
	}
	free(*p_string_array);
	*p_string_array = NULL;
}

void sort_strings(char** words)
{
	int i = 0;
	while((words)[i])
	{
		++i;
	}
	qsort(words, i, sizeof(char*), cmp);
}

int main()
{
	char** p = load_lines("three_little_pigs.txt");
	print_strings(stdout, p);
	sort_strings(p);
	print_strings(stdout, p);
	destroy_strings(&p);
}