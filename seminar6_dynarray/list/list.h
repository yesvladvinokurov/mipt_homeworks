#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


void* ecmalloc(size_t n)
{
    void* p = malloc(n);
    if (p == NULL)
    {
        fprintf(stderr, "Memory allocation error.\n");
        exit(1);
    }
    return p;
}


struct node
{
	int value;
	struct node* next;
	struct node* prev;
};

typedef struct node Node;


struct list
{
	Node* tail;
	Node* head;
	size_t size;
};

typedef struct list List;


List init(size_t n)
{
	List list = {NULL, NULL, n};
	for(size_t i = 0; i < n; ++i)
	{
		Node* node = (Node*)ecmalloc(sizeof(Node));
		node->value = 0;
		node->next = NULL;
		if(i)
		{
			list.tail->next = node;
			node->prev = list.tail;
		}
		else
		{
			list.head = node;
			node->prev = NULL;
		}
		list.tail = node;
	}
	return list;
}


void print(const List* pl)
{
	Node* node = pl->head;
	while(node)
	{
		printf("%i ", node->value);
		node = node->next;
	}
	printf("\n");
}

void push_back(List* pl, int value)
{
	Node* node = (Node*)ecmalloc(sizeof(Node));
	node->value = value;
	node->next = NULL;
	node->prev = pl->tail;
	if(pl->tail)
		pl->tail->next = node;
	else
		pl->head = node;
	pl->tail = node;
	pl->size += 1;
}


int pop_back(List* pl)
{
	assert(pl->tail);
	int value = pl->tail->value;
	if(pl->tail->prev)
	{
		pl->tail = pl->tail->prev;
		free(pl->tail->next);
		pl->tail->next = NULL;
	}
	else
	{
		free(pl->tail);
		pl->head = NULL;
		pl->tail = NULL;
	}
	pl->size -= 1;
	return value;
}


void push_front(List* pl, int value)
{
	Node* node = (Node*)ecmalloc(sizeof(Node));
	node->value = value;
	node->prev = NULL;
	node->next = pl->head;
	if(pl->head)
		pl->head->prev = node;
	else
		pl->tail = node;
	pl->head = node;
	pl->size += 1;
}


int pop_front(List* pl)
{
	assert(pl->head);
	int value = pl->head->value;
	if(pl->head->next)
	{
		pl->head = pl->head->next;
		free(pl->head->prev);
		pl->head->prev = NULL;
	}
	else
	{
		free(pl->head);
		pl->head = NULL;
		pl->tail = NULL;
	}
	pl->size -= 1;
	return value;
}


Node* erase(List* pl, Node *p)
{
	if(!(pl->size))
		return NULL;

	Node* node = p->next;
	if(p->prev)
		p->prev->next = p->next;
	else
		pl->head = p->next;
	if(p->next)
	{
		p->next->prev = p->prev;
	}
	else
	{
		pl->tail = p->prev;
	}
	pl->size -= 1;
	free(p);

	return node;
}


void splice(List* plist, Node* p, List* pother)
{
	int n = pother->size;
	for(int i = 0; i < n; ++i)
	{
		Node* node = (Node*)ecmalloc(sizeof(Node));
		node->value = pop_front(pother);
		node->prev = p->prev;
		if(p->prev)
			p->prev->next = node;
		else
			plist->head = node;
		node->next = p;
		p->prev = node;
		plist->size += 1;
	}

}


void destroy(List* pl)
{
	Node* node = pl->head;
	while(node)
		node = erase(pl, node);
}


void advance(Node** pp, size_t n)
{
	while(*pp && n)
	{
		*pp = (*pp)->next;
		n -= 1;
	}
}

