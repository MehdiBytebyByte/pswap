/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 00:22:06 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/02 03:17:14 by mboughra         ###   ########.fr       */
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
    t_stack *first;
    t_stack *second;

    if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
        return *stack; // No swap needed if stack is empty or has only one element

    first = *stack;
    second = first->next;

    // Performing the swap
    first->next = second->next;
    second->next = first;
    *stack = second;

    return *stack; // Returning the new head of the stack
};