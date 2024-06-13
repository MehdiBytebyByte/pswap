/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 01:22:36 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/13 20:35:36 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	firstpush(t_stack **a, t_stack **b, int count)
{
	int		mid;
	int		i;
	t_stack	*temp;

	temp = *a;
	i = 1;
	mid = count / 2;
	while (i <= mid && (listcount(temp) > 3))
	{
		if ((*a)->index <= mid)
		{
			pb(a, b);
			i++;
			count--;
		}
		else
			ra(a, 1);
	}
	while (count != 3)
	{
		pb (a, b);
		count--;
	}
}

t_stack	*bestmove(t_stack **a, t_stack **b)
{
	t_stack	*temp;
	t_stack	*holder;
	int		totalcost;

	totalcost = INT_MAX;
	temp = *b;
	b_calculator(b, a);
	while (temp)
	{
		if ((abs(temp->cost_b) + abs(temp->cost_a)) < totalcost)
		{
			totalcost = abs(temp->cost_b) + abs(temp->cost_a);
			holder = temp;
		}
		temp = temp->next;
	}
	return (holder);
}

void	b_calculator(t_stack **stackb, t_stack **stacka)
{
	t_stack	*b;
	int		mid;
	int		i;
	int		listsize;

	b = *stackb;
	listsize = listcount(*stackb);
	mid = listsize / 2;
	i = 0;
	while (b)
	{
		if (b->pos <= mid)
			b->cost_b = i;
		else if (b->pos > mid)
			b->cost_b = i - listsize;
		b = b->next;
		i++;
	}
	b = *stackb;
	while (b)
	{
		b->cost_a = a_calculator(b, stacka);
		b = b->next;
	}
}

int	a_calculator(t_stack *stackb, t_stack **stacka)
{
	t_stack	*a;
	int		listsize;
	int		median;
	int		i;

	listsize = listcount(*stacka);
	median = listcount(*stacka) / 2;
	a = *stacka;
	i = 0;
	while (a)
	{
		if (a->pos == stackb->target_pos)
		{
			if (i <= median)
				return (i);
			if (i > median)
				return (i - listsize);
		}
		a = a->next;
		i++;
	}
	return (0);
}

void	execute(t_stack **a, t_stack **b, t_stack *tbs)
{
	while (tbs->cost_a > 0 && tbs->cost_b > 0)
	{
		rr(a, b);
		tbs->cost_a--;
		tbs->cost_b--;
	}
	while (tbs->cost_a < 0 && tbs->cost_b < 0)
	{
		rrr(a, b);
		tbs->cost_a++;
		tbs->cost_b++;
	}
	while (tbs->cost_a > 0)
	{
		ra(a, 1);
		tbs->cost_a--;
	}
	while (tbs->cost_a < 0)
	{
		tbs->cost_a++;
		rra(a, 1);
	}
	while (tbs->cost_b > 0)
	{
		tbs->cost_b--;
		rb(b, 1);
	}
	while (tbs->cost_b < 0)
	{
		tbs->cost_b++;
		rrb(b, 1);
	}
	pa(b, a);
}
