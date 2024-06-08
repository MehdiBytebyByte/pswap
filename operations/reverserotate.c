/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 00:30:16 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/09 00:31:15 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void rra(t_stack **stack)
{
	t_stack	*second;
	t_stack	*first;
	t_stack *third;
	
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
		
	first = *stack;
	second = *stack;
	third = *stack;

	while (third->next)
		third = third->next;
	while (second->next->next)
		second = second->next;
	second->next = NULL;
	third->next = first;
	*stack = third;
};
void rrb(t_stack **stack)
{
	t_stack	*second;
	t_stack	*first;
	t_stack *third;
	
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
		
	first = *stack;
	second = *stack;
	third = *stack;

	while (third->next)
		third = third->next;
	while (second->next->next)
		second = second->next;
	second->next = NULL;
	third->next = first;
	*stack = third;
};

void	rrr(t_stack **stack, t_stack **stack2)
{
	rra(stack);
	rrb(stack2);
};