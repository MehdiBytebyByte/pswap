/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:31:41 by mboughra          #+#    #+#             */
/*   Updated: 2024/07/03 08:29:19 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check(char **argv)
{
	if (!nullcheck(argv) || !numcheck(argv) || !signcheck(argv)
		|| !onlysigncheck(argv) || !emptystringcheck(argv))
		return (-1);
	return (0);
}

int	main(int argc, char	**argv)
{
	t_stack	*stacka;
	t_stack	*stackb;

	stacka = NULL;
	if (argc == 1)
		return (0);
	if (check(argv) == -1)
		ft_error(stacka);
	stacka = stackbuild(argv, stacka);
	check_for_duplicates(stacka);
	indexing(stacka);
	start_sort(&stacka, &stackb);
	free_stack(stacka);
	return (0);
}
