/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:31:41 by mboughra          #+#    #+#             */
/*   Updated: 2024/05/23 02:12:49 by mboughra         ###   ########.fr       */
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
int numcheck(char **argv)
{
	int i;
	int j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] >= '0' && argv[i][j] <= '9')
				|| argv[i][j] == ' ' || argv[i][j] == '-' || argv[i][j] == '+')
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int check(char **argv)
{
	if (!numcheck(argv))
		return (-1);
	return (0);
};

int main(int argc, char **argv)
{
	int		i;
	char	**temp;
	Node	*A;
	i = 1;
	if(check(argv) == -1)
		exit(1);
	while (argv[i])
	{
		temp = ft_split(argv[i], ' ');
		int j;

		j = 0;
		while (temp[j])
		{
			push(&A,atoi(temp[j]));
			printf("%d\n",atoi(temp[j]));
			j++;
		}
		i++;
	}
	
};
