/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:31:41 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/04 22:21:44 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_error(int num,t_stack *stack)
{
		ft_putstrerror("ERROR\n");
		exit(1);
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
		while (j >= 0)
			free(temp[--j]);
		free(temp);
		i++;
	}
	return (stack);
};

void	func(void)
{
	system("leaks push_swap");
};

int main(int argc, char  *argv[])
{
	// atexit(func);
	t_stack *stack;
	
	stack = NULL;
	if (argc < 2)
		ft_error(0, stack);
	if (check(argv) == -1)
		ft_error(1, stack);
	stack = stackbuild(argv, stack);
	check_for_duplicates(stack);
	t_stack *temp;
	
	temp = stack;
	while (temp)
	{
		printf("---> %d\n", temp->value);
		temp = temp->next;
	}
	stack = rotate(&stack);
	printf("\nRotate\n");
	temp = stack;
	while (temp)
	{
		printf("---> %d\n", temp->value);
		temp = temp->next;
	};
	stack = swap(&stack);
	printf("\nSwap\n");
	temp = stack;
	while (temp)
	{
		printf("---> %d\n", temp->value);
		temp = temp->next;
	};
	


	
	free_stack(stack);
	return 0;
}


// to do list
// handle atoi(overflow and underflow)
// free both stacks at errors after 3
