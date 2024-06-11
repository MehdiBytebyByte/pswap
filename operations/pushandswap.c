/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushandswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 00:22:06 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/11 01:21:00 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void	ss(t_stack **stack, t_stack **stack2)
{
	sa(stack);
	sb(stack2);
};

void pa(t_stack **source, t_stack **destination)
{
    t_stack *temp;
    t_stack *temp2;

    if (!source || !*source)
        return;
		
	temp = *source;
    *source = (*source)->next;
    temp->next = *destination;
    *destination = temp;
};

void pb(t_stack **source, t_stack **destination)
{
    t_stack *temp;
    t_stack *temp2;

    if (!source || !*source)
        return;
		
	temp = *source;
    *source = (*source)->next;
    temp->next = *destination;
    *destination = temp;
};

