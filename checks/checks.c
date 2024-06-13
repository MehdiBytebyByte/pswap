/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 00:02:11 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/13 20:27:23 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	check_for_duplicates(t_stack	*head)
{
	t_stack	*current;
	t_stack	*runner;

	current = head;
	while (current != NULL)
	{
		runner = current->next;
		while (runner != NULL)
		{
			if (current->value == runner->value)
				ft_error(3, head);
			runner = runner->next;
		}
		current = current->next;
	}
}

int	emptystringcheck(char **argv)
{
	int		i;
	int		j;
	size_t	count;

	i = 1;
	while (argv[i])
	{
		j = 0;
		count = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == ' ')
				count++;
			if (ft_strlen(argv[i]) == count)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	numcheck(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] >= '0' && argv[i][j] <= '9')
				|| argv[i][j] == ' ' || argv[i][j] == '-' || argv[i][j] == '+')
				j++;
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int	signcheck(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] == '+' || argv[i][j] == '-' ))
				if ((argv[i][j - 1] >= '0' && argv[i][j - 1] <= '9')
				|| argv[i][j - 1] == '+' || argv[i][j - 1] == '-')
					return (0);
			if ((argv[i][j] == '+' || argv[i][j] == '-' ))
			{
				if (argv[i][j + 1] == ' ')
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	onlysigncheck(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_strlen(argv[i]) == 1 && (argv[i][0] == '+' || argv[i][0] == '-'))
			return (0);
		i++;
	}
	return (1);
}
