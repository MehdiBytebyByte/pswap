/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:31:41 by mboughra          #+#    #+#             */
/*   Updated: 2024/05/18 21:08:14 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void initialize(Stack *Alpha)
{
    Alpha->top = NULL;
}
int isEmpty(Stack *Alpha)
{
    return Alpha->top == NULL;
}
void push(Stack *Alpha, int value)
{
    Node *newNode;
	newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
	{
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = Alpha->top;
    
	if (Alpha->top != NULL)
	{
        Alpha->top->prev = newNode;
    }
    Alpha->top = newNode;
}

int pop(Stack *Alpha)
{
	Node *temp;
	int value;

    if (isEmpty(Alpha))
	{
        printf("Alpha Underflow\n");
        exit(1);
    }
    temp = Alpha->top;
    value = temp->data;
    Alpha->top = temp->next;
    if (Alpha->top != NULL)
	{
		Alpha->top->prev = NULL;
    }
    free(temp);
    return value;
}
int peek(Stack *Alpha)
{
    if (isEmpty(Alpha)) 
	{
        printf("Alpha is empty\n");
        exit(1);
    }
    return Alpha->top->data;
}

Stack function(Stack *Alpha, char **argv)
{
	char **str;
	int	temp;
	while (*argv)
	{
		str = ft_split(*argv,' ');
		while (*str)
		{
			temp = ft_atoi(*str);
			push(Alpha, temp);
			str++;
		}
		argv++;
	}
	return (*Alpha);
}

int main(int argc, char **argv)
{
	Stack stack;
	(void)argc;
	
	stack = function(&stack, argv);
	while (peek(&stack))
	{
		printf("%d\n",peek(&stack));
		pop(&stack);
	}

};



	///

	// 	while (*argv)
	// {
	// 	str = ft_split(*argv,' ');
	// 	while (*str)
	// 	{
	// 		temp = ft_atoi(*str);
	// 		push(&stack, temp);
	// 		str++;
	// 	}
	// 	argv++;
	// }