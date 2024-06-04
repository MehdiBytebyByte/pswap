/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 00:22:06 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/05 00:23:26 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_stack **stack)
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

void sb(t_stack **stack)
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

t_stack *rotate(t_stack **stack)
{
	t_stack	*second;
	t_stack	*first;
	t_stack *third;
	
	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return *stack;
		
	second = *stack;
	first = *stack;
	while (second->next->next)
		second = second->next;
	third = second->next;
	second->next = first;
	*stack = third;
	third->next = first->next;
	first->next = NULL;
	// printf("\nThe First Value %d\n",first->value);
	// printf("\nThe Second Value %d\n",second->value);
	// printf("\nThe Third Value %d\n",third->value);
	
	return (*stack);
};
