/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:31:41 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/08 19:48:09 by mboughra         ###   ########.fr       */
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
			pushback(&stack, new);
			j++;
		}
		
	while (j >= 0)
			free(temp[j--]);
		free(temp);
		i++;
	}
	return (stack);
};

void	func(void)
{
	system("leaks push_swap");
};

void	readstack(t_stack *stack)
{
	while (stack)
	{
		printf("%d  ",stack->value);
		stack = stack->next;
	}
};

int main(int argc, char  *argv[])
{
	// atexit(func);
	t_stack *stack;
	t_stack *stackb;
	
	stack = NULL;
	if (argc < 2)
		ft_error(0, stack);
	if (check(argv) == -1)
		ft_error(1, stack);
	stack = stackbuild(argv, stack);
	check_for_duplicates(stack);
	stackb = buildb(stack,stackb);
	readstack(stack);
	// free_stack(b);
	return (0);
}


// to do list
// handle atoi(overflow and underflow)
// free both stacks at errors after 3
