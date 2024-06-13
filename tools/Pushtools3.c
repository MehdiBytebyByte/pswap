/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pushtools3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 03:45:31 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/13 00:48:03 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	readstack(t_stack *stack) //TODO delete me
{
	printf("Value\tindex\tposition\ttarget\tb_cost\ta_cost\n");
	while (stack)
	{
		printf("%d    \t%d     \t%d\t        %d\t%d\t\t%d\n",stack->value, stack->index,stack->pos,stack->target_pos, stack->cost_b, stack->cost_a);
		stack = stack->next;
	}
	printf("\n");
};

void	ft_error(int num,t_stack *stack) //TODO code finish this function
{
		ft_putstrerror("ERROR\n");
		exit(1);
};
