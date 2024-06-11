/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 01:22:36 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/11 02:09:21 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	firstpush(t_stack **a, t_stack **b, int count)
{
	int mid; 
	int	i;
	t_stack *temp;
	
	temp = *a;
	i = 0;
	mid = count / 2;
	while (i <= mid)
	{
		if (temp->index <= mid)
		{
			printf("---\n");
			pa(&temp, b);
			i++;
			count--;
			// readstack(*a);ß
		}
		else
			ra(&temp);
			printf("***\n");
			// readstack(temp);
	}
	while (count != 3)
	{
		printf("+++\n");
		pa (&temp, b);
		count--;	
	}
}
