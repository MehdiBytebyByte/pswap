#include <libc.h>
#include "push_swap.h"



Node* createNode(int data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL)
	{
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void initializeStack(Stack* stack)
{
    stack->top = NULL;
}

int isEmpty(Stack* stack)
{
    return stack->top == NULL;
}

void push(Stack* stack, int data)
{
    Node* newNode = createNode(data);
    newNode->next = stack->top;
    stack->top = newNode;
}

int pop(Stack* stack)
{
    if (isEmpty(stack))
	{
        printf("Stack underflow: Cannot pop from an empty stack.\n");
        exit(1);
    }
    int data = stack->top->data;
    Node* temp = stack->top;
    stack->top = stack->top->next;
    free(temp);
    return data;
}

int peek(Stack* stack)
{
    if (isEmpty(stack))
	{
        printf("Stack is empty.\n");
        exit(1);
    }
    return stack->top->data;
}

void display(Stack* stack)
{
    if (isEmpty(stack))
	{
        printf("Stack is empty.\n");
        return;
    }
    Node* current = stack->top;
    printf("Stack elements: ");
    while (current != NULL)
	{
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    Stack stack;
    initializeStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    display(&stack);

    // printf("Top element: %d\n", peek(&stack));

    // printf("Popped element: %d\n", pop(&stack));

    // display(&stack);

    return 0;
}