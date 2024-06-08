/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 00:28:14 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/09 00:31:08 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ra(t_stack **stack)
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
};

void rb(t_stack **stack)
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
};

void	rr(t_stack **stack, t_stack **stack2)
{
	ra(stack);
	rb(stack2);
};


