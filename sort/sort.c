/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 05:25:10 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/10 04:20:21 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	start_sort(t_stack **stacka,t_stack **stackb)
{
	int count;
	
	count = listcount(*stacka);
	if (alreadysorted(*stacka, count))
		return ;
	if (count == 2)
		two_elements(stacka);
	else if (count == 3)
		three_elements(stacka);
	else
		sortmore(stacka, stackb, count);
};

int	alreadysorted(t_stack *stack, int listcount)
{
	t_stack	*temp;
	int			i;
	
	i = 1;
	temp =  stack;
	while (temp->next)
	{
		if (temp->index < temp->next->index)
			i++;
		temp = temp->next;
	}
	if (i == listcount)
		return (1);
	return (0);
};

void	two_elements(t_stack **stack)
{
	if ((*stack)->index > (*stack)->next->index)
		sa(stack);
};

void	three_elements(t_stack **stacka)
{
	t_stack	*third;

	third = (*stacka)->next->next;
	if ((*stacka)->value > (*stacka)->next->value)
	{
		if ((*stacka)->index < third->index)
			sa(stacka);
		else if ((*stacka)->next->index > third->index)
		{
			sa(stacka);
			rra(stacka);
		}
		else if ((*stacka)->next->index < third->index)
			ra(stacka);
	}
	else
	{
		if ((*stacka)->index > third->index)
			rra(stacka);
		else
		{
			sa(stacka);
			ra(stacka);
		}
	}
};

void	sortmore(t_stack **stacka, t_stack **stackb, int count)
{
	int mid; 
	int	i;
	
	i = 0;
	mid = count / 2;
	while (count != 3)
	{
		pa(stacka ,stackb);
		count--;
	}
	if (!alreadysorted(*stacka, count))
		three_elements(stacka);
	positionassigner(stacka, stackb);
	printf("Stack A\n");
	readstack(*stacka);
	printf("\n------------------------------------\n\n\n");
	printf("Stack B\n");
	readstack(*stackb);
}