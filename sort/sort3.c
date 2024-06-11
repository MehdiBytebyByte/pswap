/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 01:22:36 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/11 03:27:57 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	firstpush(t_stack **a, t_stack **b, int count)
{
	int mid; 
	int	i;
	t_stack *temp;
	
	temp = *a;
	i = 1;
	mid = count / 2;
	while (i <= mid)
	{
		if (temp->index <= mid)
		{
			pa(&temp, b);
			i++;
			count--;
			// printf("Stack A\n");
			// readstack(temp);
			// printf("\n------------------------------------\n\n\n");
			// printf("Stack B\n");
			// readstack(*b);
		}
		else
		{
			ra(&temp);
			// printf("Stack A\n");
			// readstack(temp);
			// printf("\n------------------------------------\n\n\n");
			// printf("Stack B\n");
			// readstack(*b);
		}
	}
	while (count != 3)
	{
		// printf("last 3\n");
		pa (&temp, b);
		count--;
		// printf("Stack A\n");
		// readstack(temp);
		// printf("Stack B\n");
		// readstack(*b);
	}
		// printf("\n------------------------------------\n\n\n");
		// printf("\n------------------------------------\n\n\n");
		// printf("\n------------------------------------\n\n\n");
		// printf("\n------------------------------------\n\n\n");
		// printf("\n------------------------------------\n\n\n");
		// printf("Stack A\n");
		// readstack(temp);
		// printf("Stack B\n");
		// readstack(*b);
		// printf("\n------------------------------------\n\n\n");
}
