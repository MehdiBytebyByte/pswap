/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushandswap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 00:22:06 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/13 20:26:32 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack **stack, int i)
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
	if (i == 1)
		ft_putstr("sa\n");
}

void	sb(t_stack **stack, int i)
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
	if (i == 1)
		ft_putstr("sb\n");
}

void	ss(t_stack **stack, t_stack **stack2)
{
	ft_putstr("ss\n");
	sa(stack, 0);
	sb(stack2, 0);
}

void	pa(t_stack **source, t_stack **destination)
{
	t_stack	*temp;

	if (!source || !*source)
		return ;
	temp = *source;
	*source = (*source)->next;
	temp->next = *destination;
	*destination = temp;
	ft_putstr("pa\n");
}

void	pb(t_stack **source, t_stack **destination)
{
	t_stack	*temp;

	if (!source || !*source)
		return ;
	temp = *source;
	*source = (*source)->next;
	temp->next = *destination;
	*destination = temp;
	ft_putstr("pb\n");
}
