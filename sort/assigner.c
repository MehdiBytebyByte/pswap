/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assigner.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 03:50:06 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/29 02:21:57 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	positionassigner(t_stack **stacka, t_stack **stackb)
{
	int		i;
	t_stack	*temp;

	i = 0;
	temp = *stackb;
	while (temp)
	{
		temp->pos = i++;
		temp = temp->next;
	}
	i = 0;
	temp = *stacka;
	while (temp)
	{
		temp->pos = i++;
		temp = temp->next;
	}
}

int	targetfinder(t_stack **stacka, int index)
{
	t_stack	*a;
	int		position;
	int		smallest;

	smallest = INT_MAX;
	a = *stacka;
	while (a)
	{
		if (a->index > index && ((a->index - index) < smallest))
		{
			smallest = a->index - index;
			position = a->pos;
		}
		a = a->next;
	}
	if (smallest == INT_MAX)
		return (-1);
	return (position);
}

void	targetassigner(t_stack **stacka, t_stack **stackb)
{
	t_stack	*b;

	b = *stackb;
	while (b)
	{
		b->target_pos = targetfinder(stacka, b->index);
		b = b->next;
	}
	getminpos(stacka, stackb);
}
