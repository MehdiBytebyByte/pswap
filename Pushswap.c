/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:31:41 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/09 01:35:37 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_error(int num,t_stack *stack)
{
		ft_putstrerror("ERROR\n");
		exit(1);
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
	printf("\n");
};

int main(int argc, char  *argv[])
{
	t_stack *stacka;
	t_stack *stackb;
	
	stacka = NULL;
	if (argc < 2)
		ft_error(0, stacka);
	if (check(argv) == -1)
		ft_error(1, stacka);
	stacka = stackbuild(argv, stacka);
	check_for_duplicates(stacka);
	pa(&stacka,&stackb);
	readstack(stackb);
	free_stack(stacka);
	free_stack(stackb);
	return (0);
}


// to do list
// handle atoi(overflow and underflow)
// free both stacks at errors after 3
