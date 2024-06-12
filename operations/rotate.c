/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 00:28:14 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/13 00:32:56 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ra(t_stack **stack, int i)
{
	t_stack	*last;
	t_stack	*first;
	
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	first = *stack;
	last = *stack;
	while (last->next)
		last = last->next;
	last->next = first;
	*stack = first->next;
	first->next = NULL;
	if (i == 1)
		ft_putstr("ra\n");
};

void rb(t_stack **stack, int i)
{
	t_stack	*last;
	t_stack	*first;
	
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	first = *stack;
	last = *stack;
	while (last->next)
		last = last->next;
	last->next = first;
	*stack = first->next;
	first->next = NULL;
	if (i == 1)
		ft_putstr("ra\n");
};

void	rr(t_stack **stack, t_stack **stack2)
{
	ft_putstr("rr\n");
	ra(stack, 0);
	rb(stack2, 0);
};


