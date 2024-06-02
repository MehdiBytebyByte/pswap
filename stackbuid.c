/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackbuid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 00:01:41 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/02 00:21:05 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*new_element(int value)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		ft_error(5,new);
	new->value = value;
	new->index = -1;
	new->pos = -1;
	new->target_pos = -1;
	new->cost_a = -1;
	new->cost_b = -1;
	new->next = NULL;
	return (new);
}

void	push(t_stack **stack, t_stack *new_element)
{
	if (!new_element)
		return ;
	new_element->next = *stack;
	*stack = new_element;
};

int	listcount(t_stack *stack)
{
	int i;

	i = 0;
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
};

void free_stack(t_stack *stack)
{
    t_stack *temp;
    while (stack)
    {
        temp = stack;
        stack = stack->next;
        free(temp);
    }
};

// t_stack buildb(t_stack *stacka,t_stack *stackb)
// {
// 	int i;
// 	int count;

// 	i = 0;
// 	count = listcount(stacka);
// 	while (i > listcount)
// 	{
		
// 	}
	
// }