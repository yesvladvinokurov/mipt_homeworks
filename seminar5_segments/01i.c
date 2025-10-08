#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book {
    char* title;
    int pages;
    float price;
};
typedef struct book Book;

void print_book(Book* pb)
{
    printf("Book info:\n");
    printf("Title: %s\nPages: %d\nPrice: %g\n\n", pb->title, pb->pages, pb->price);
}


struct library
{
    Book* books;
    int number_of_books;
};
typedef struct library Library;

void library_create(Library* pl, int number_of_books)
{
    pl->number_of_books = number_of_books;
    pl->books = (Book*)malloc(number_of_books * sizeof(Book));
}

void library_set(Library l, int i, char* title, int pages, float price)
{
    l.books[i].title = (char*)malloc((strlen(title) + 1) * sizeof(char));
    strcpy(l.books[i].title, title);
    l.books[i].pages = pages;
    l.books[i].price = price;
}

Book* library_get(Library l, int i)
{
    return (l.books + i);
}

void library_print(Library l)
{
    for(size_t i = 0; i < l.number_of_books; ++i)
        print_book(library_get(l, i));
}

void library_destroy(Library* pl)
{
    for(size_t i; i < pl->number_of_books; ++i)
        free((pl->books)[i].title);
    free(pl->books);
    pl->books = NULL;
    pl->number_of_books = 0;
}

int main()
{
    Library a;
    library_create(&a, 3);
    library_set(a, 0, "Don Quixote", 1000, 750.0);
    library_set(a, 1, "Oblomov", 400, 250.0);
    library_set(a, 2, "The Odyssey", 500, 500.0);
    library_print(a);
    print_book(library_get(a, 1));
    library_destroy(&a);
}
