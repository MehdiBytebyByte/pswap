/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackbuild.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 00:01:41 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/09 00:35:16 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pushback(t_stack **stack, t_stack *new_element)
{
    t_stack *current;

    if (!new_element)
        return ;
    if (*stack == NULL)
        *stack = new_element;
    else
    {
        current = *stack;
        while (current->next != NULL)
            current = current->next;
        current->next = new_element;
    }
};

void	pushfront(t_stack **stack, t_stack *new_element)
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
