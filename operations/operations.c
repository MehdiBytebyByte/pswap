/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 00:22:06 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/08 23:12:07 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;
	
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
		
	first = *stack;
	second = first->next;
	first->next = second->next;
    second->next = first;
    *stack = second;
};

void reverserotate(t_stack **stack)
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
void rotate(t_stack **stack)
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

void pushop(t_stack **stack, t_stack **stackb)
{
    t_stack *temp;
    t_stack *temp2;

    if (!stack || !*stack)
        return;
		
	temp = *stack;
    *stack = (*stack)->next;
    temp->next = *stackb;
    *stackb = temp;
}

