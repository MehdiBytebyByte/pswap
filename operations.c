/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 00:22:06 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/02 03:26:16 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// t_stack *swapfirsttwoelements(t_stack **stack)
// {
// 	t_stack *temp;
// 	temp = *stack;
	
// 	temp = temp->next;
// 	temp->next = *stack;
// 	stack->next = stack->next->next;

// 	return(*stack);
// }

t_stack *swap(t_stack **stack)
{
	t_stack	*first;
	t_stack	*second;
	
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return *stack;
		
	first = *stack;
	second = first->next;
	first->next = second->next;
    second->next = first;
    *stack = second;
	return (*stack);
};
t_stack *rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*first;
	
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return *stack;
		
	last = *stack;
	first = *stack;
	while (last)
	{
		if (last->next )
		{
			/* code */
		}
			
	}
	
	
	return (*stack);
};
