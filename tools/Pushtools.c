/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pushtools.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:57:44 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/09 01:19:36 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_ofchercker(long max, long re, int s)
{
	if (max > re && s > 0)
		return (-1);
	if (max > re && s < 0)
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int		i;
	int		s;
	long	re;
	long	max;

	i = 0;
	s = 1;
	re = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		max = re;
		re = re * 10 +(str[i] - 48);
		if (ft_ofchercker(max, re, s) != 1)
			return (ft_ofchercker(max, re, s));
		i++;
	}
	return (re * s);
}

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
};

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
};

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
};
