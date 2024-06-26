/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 01:22:36 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/13 22:43:25 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	execute2(a, b, tbs);
}

void	execute2(t_stack **a, t_stack **b, t_stack *tbs)
{
	while (tbs->cost_a != 0)
	{
		if (tbs->cost_a > 0)
		{
			ra(a, 1);
			tbs->cost_a--;
		}
		else
		{
			tbs->cost_a++;
			rra(a, 1);
		}
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
