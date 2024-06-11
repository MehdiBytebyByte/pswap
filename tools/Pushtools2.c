/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pushtools2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 20:32:22 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/11 04:31:07 by mboughra         ###   ########.fr       */
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
};

void	getminpos(t_stack **a,t_stack **b)
{
	int holder;
	int posholder;
	t_stack *stka;
	t_stack *stkb;

	stkb = *b;
	stka = *a;
	holder = listcount(*a) + listcount(*b) + 1;
	while (stka)
	{
		if (holder > stka->index)
			{
				holder = stka->index;
				posholder = stka->pos;
			}
		stka = stka->next;
	};
	while (stkb)
	{
		if (stkb->target_pos == -1)
			stkb->target_pos = posholder;
		stkb = stkb->next;
	}
}

void	b_calculator(t_stack **stackb)
{
	t_stack *b;
	int mid;
	int	i;
	int	listsize;

	b = *stackb;
	listsize = listcount(*stackb);
	mid = listsize / 2;
	i = 0;
	while (b)
	{
		if (b->pos <= mid)
			b->cost_b = i;
		else if (b->pos > mid)
			b->cost_b = listsize - i;
		b = b->next;
		i++;			
	}
}
