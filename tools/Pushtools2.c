/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pushtools2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 20:32:22 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/09 22:33:44 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void free_stack(t_stack *stack)
{
    t_stack *temp;
    while (stack)
    {
        temp = stack;
        stack = stack->next;
        free(temp);
    }
};

void	indexing(t_stack *stack)
{
	t_stack *i;
	t_stack *j;
	
	i = stack;

	while (i != NULL)
	{
		j = stack;
		i->index = 1;
		while (j != NULL)
		{
			if (i->value > j->value)
				i->index++;
			j = j->next;
		}
		i = i->next;
	};
}
