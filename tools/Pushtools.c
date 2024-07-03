/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pushtools.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:57:44 by mboughra          #+#    #+#             */
/*   Updated: 2024/07/03 02:24:54 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi(char *str, t_stack *stack)
{
	int			i;
	int			s;
	long long	re;

	i = 0;
	s = 1;
	re = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13) || str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		re = re * 10 +(str[i] - 48);
		if (re < INT_MIN || re > INT_MAX)
			break ;
		i++;
	}
	re = re * s;
	if (re < INT_MIN || re > INT_MAX)
		ft_error(stack);
	return (re);
}

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write (1, &s[i], 1);
		i++;
	}
}

void	ft_putstrerror(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write (2, &s[i], 1);
		i++;
	}
}
