#include <libc.h>

typedef struct Node
{
	int data;
	struct Node *next;
}	Node;


void	addtonode(Node **Stack, int data)
{
	Node *new;

	if (!Stack)
		return ;
	new = (Node *)malloc(sizeof(Node));
	new->data = data;
	new->next = *Stack;
	*Stack = new;
}


int main(int argc, char const *argv[])
{
	Node *Hello;

	Hello = (Node *)malloc(sizeof(Node));
	Hello->data = 9;

	addtonode(NULL, 18);
	addtonode(&Hello, 27);
	addtonode(&Hello, 36);
	addtonode(&Hello, 45);
	addtonode(&Hello, 54);

	Node *temp;
	temp = Hello;

	while (temp)
	{
		printf("%d\n",temp->data);
		temp = temp->next;
	}
	

	return 0;
}
