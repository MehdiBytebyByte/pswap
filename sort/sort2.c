/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 03:50:06 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/11 01:19:48 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	positionassigner(t_stack **stacka, t_stack **stackb)
{
	int i;

	i = 0;
	t_stack *temp;

	temp = *stackb;
	while (temp)
	{
		temp->pos = i++;
		temp = temp->next;
	};
	i = 0;
	temp = *stacka;
	while (temp)
	{
		temp->pos = i++;
		temp = temp->next;
	};
	targetassigner(stacka, stackb);
};

int	targetfinder(t_stack **stacka,t_stack **stackb, int index)
{
	t_stack *a;
	int	position;
	int	smallest;

	smallest = listcount(*stacka) + listcount(*stackb);
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
	if (smallest == listcount(*stacka) + listcount(*stackb))
		return(-1);
	return (position);
};

void	targetassigner(t_stack **stacka, t_stack **stackb)
{
	t_stack *b;
	t_stack *a;
	int holder;
	int difference;

	b = *stackb;
	while (b)
	{
		b->target_pos = targetfinder(stacka, stackb, b->index);
		b = b->next;
	}
	getminpos(stacka, stackb);
};
