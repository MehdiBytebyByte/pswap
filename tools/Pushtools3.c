/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pushtools3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 03:45:31 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/13 20:33:58 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(int num, t_stack *stack) //TODO code finish this function
{
	num++;
	num--;
	ft_putstrerror("ERROR\n");
	free_stack(stack);
	exit(1);
}
