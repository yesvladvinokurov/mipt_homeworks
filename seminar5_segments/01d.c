#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book {
    char title[50];
    int pages;
    float price;
};
typedef struct book Book;

void print_book(struct book b)
{
    printf("Book info:\n");
    printf("Title: %s\nPages: %d\nPrice: %g\n\n", b.title, b.pages, b.price);
}

int main()
{
	Book* p = (Book*)malloc(sizeof(Book));
	strcpy(p->title, "Don Quixot");
	p->pages = 1000;
	p->price = 750.0;
	print_book(*p);
	free(p);
}