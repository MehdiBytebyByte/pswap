/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:31:41 by mboughra          #+#    #+#             */
/*   Updated: 2024/05/31 20:47:21 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

int signcheck(char **argv)
{
	int i;
	int j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] == '+' || argv[i][j] == '-' ))
				if ((argv[i][j - 1] >= '0' && argv[i][j - 1] <= '9') || argv[i][j - 1] == '+' || argv[i][j - 1] == '-')
				{
					// printf("this is j that failled --> %c \n",argv[i][j]);
					return (0);
				}
			if ((argv[i][j] == '+' || argv[i][j] == '-' ))
			{
				if (argv[i][j + 1] == ' ')
					return (0);	
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	onlysigncheck(char **argv)
{
	int i;
	
	i = 1;
	while (argv[i])
	{
		if (ft_strlen(argv[i]) == 1 && (argv[i][0] == '+' || argv[i][0] == '-'))
		{
			return (0);
		}
		i++;
	}
	return (1);	
}

int check(char **argv)
{
	int i;
	int count;
	
	if (!numcheck(argv) || !signcheck(argv)|| !onlysigncheck(argv))
		return (-1);
	return (0);
};

t_stack	*stackbuild(char **argv, t_stack *stack)
{
	int	i;
	int	j;
	char **temp;
	t_stack *new;
	
	i = 1;
	while (argv[i])
	{
		temp = ft_split(argv[i],' ');
		j = 0;
		while (temp[j])
		{
			new = new_element(ft_atoi(temp[j]));
			push(&stack, new);
			j++;
		}
		while (j != 0)
		{
			free(temp[j--]);
		}
		free(temp);
		i++;
	}
	return (stack);
};

void	func(void)
{
	system("leaks push_swap");
}


void check_for_duplicates(t_stack	*head)
{
    t_stack	*current;
	t_stack	*runner; 
	
	current = head;
    while (current != NULL)
	{
       runner = current->next;
        while (runner != NULL)
		{
            if (current->value == runner->value)
				ft_error(3, head);
            runner = runner->next;
        }
        current = current->next;
    }
}

void	ft_error(int num,t_stack *stack)
{
		ft_putstrerror("ERROR\n");
		exit(1);
}

int main(int argc, char  *argv[])
{
	t_stack *stack;
	
	if (argc < 2)
		ft_error(0, stack);
	if (check(argv) == -1)
		ft_error(1, stack);
	stack = (t_stack *)malloc(sizeof(t_stack));
	stack = stackbuild(argv, stack);
	check_for_duplicates(stack);
	

	//display the stack if correct
	
	t_stack *temp;
	temp = stack;
	while (temp->next)
	{
		printf("%d  ",temp->value);
		temp = temp->next;
	}
		
	
	// atexit(func);
	return 0;
}


// to do list
// handle atoi(overflow and underflow)
// free both stacks at errors after 3
