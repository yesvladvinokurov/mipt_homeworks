#include <stdio.h>

struct node
{
	int value;
	struct node* ptr;
};

typedef struct node Node;

int main()
{
	Node node_1;
	Node* ptr_1 = &node_1;

	Node node_2 = {200, ptr_1};
	Node* ptr_2 = &node_2;

	node_1.value = 100;
	node_1.ptr = ptr_2;

	printf("Node_1: value=%i, value_in_pointer=%i\n", node_1.value, node_1.ptr->value);
	printf("Node_2: value=%i, value_in_pointer=%i\n", node_2.value, node_2.ptr->value);
}