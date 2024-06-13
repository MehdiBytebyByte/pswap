/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:31:41 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/13 20:30:28 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	func(void) //TODO delete me
{
	system("leaks push_swap");
}

int	check(char **argv)
{
	if (!numcheck(argv) || !signcheck(argv) || !onlysigncheck(argv)
		|| !emptystringcheck(argv))
		return (-1);
	return (0);
}

int	main(int argc, char	**argv)
{
	t_stack	*stacka;
	t_stack	*stackb;

	stacka = NULL;
	if (argc < 2)
		ft_error(0, stacka);
	if (check(argv) == -1)
		ft_error(1, stacka);
	stacka = stackbuild(argv, stacka);
	check_for_duplicates(stacka);
	indexing(stacka);
	start_sort(&stacka, &stackb);
	free_stack(stacka);
	return (0);
}
