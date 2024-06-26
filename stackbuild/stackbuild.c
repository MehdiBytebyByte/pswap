/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stackbuild.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 00:01:41 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/13 23:08:05 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pushback(t_stack **stack, t_stack *new_element)
{
	t_stack	*current;

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
}

int	listcount(t_stack *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}

t_stack	*stackbuild(char **argv, t_stack *stack)
{
	int		i;
	int		j;
	char	**temp;
	t_stack	*new;

	i = 1;
	while (argv[i])
	{
		temp = ft_split(argv[i], ' ');
		j = 0;
		while (temp[j])
		{
			new = new_element(ft_atoi(temp[j], stack));
			pushback(&stack, new);
			j++;
		}
		while (j >= 0)
			free(temp[j--]);
		free(temp);
		i++;
	}
	return (stack);
}

t_stack	*new_element(int value)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		ft_error(new);
	new->value = value;
	new->index = -1;
	new->pos = -1;
	new->target_pos = -1;
	new->cost_a = -1;
	new->cost_b = -1;
	new->next = NULL;
	return (new);
}
