/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:32:16 by mboughra          #+#    #+#             */
/*   Updated: 2024/07/03 08:05:14 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

size_t	ft_strlen(char *s);
int		ft_atoi(char *str, t_stack *stack);
int		ft_subscounter(char *str, char c);
char	*coppier(char *s, int y, int x);
char	**ft_split(char *s, char c);
void	freemem(char **splited, int r);
char	**allocater(char *str, char c, int nsubs, char **splited);
void	ft_putstrerror(char *s);
void	ft_putstr(char *s);
void	ft_error(t_stack *stack);
int		check(char **argv);
int		onlysigncheck(char **argv);
int		signcheck(char **argv);
int		numcheck(char **argv);
void	check_for_duplicates(t_stack	*head);
int		emptystringcheck(char **argv);
t_stack	*new_element(int value, t_stack *stack, char **str, int j);
int		listcount(t_stack *stack);
void	free_stack(t_stack *stack);
void	pushback(t_stack **stack, t_stack *new_element);
t_stack	*stackbuild(char **argv, t_stack *stack);
void	pa(t_stack **source, t_stack **destination);
void	pb(t_stack **source, t_stack **destination);
void	ss(t_stack **stack, t_stack **stack2);
void	sa(t_stack **stack, int i);
void	sb(t_stack **stack, int i);
void	rr(t_stack **stack, t_stack **stack2);
void	ra(t_stack **stack, int i);
void	rb(t_stack **stack, int i);
void	rrr(t_stack **stack, t_stack **stack2);
void	rra(t_stack **stack, int i);
void	rrb(t_stack **stack, int i);
void	two_elements(t_stack **stack);
void	three_elements(t_stack **stacka);
void	start_sort(t_stack **stacka, t_stack **stackb);
void	indexing(t_stack *stack);
int		alreadysorted(t_stack *stack, int listcount);
void	sortmore(t_stack **stacka, t_stack **stackb, int count);
void	positionassigner(t_stack **stacka, t_stack **stackb);
void	targetassigner(t_stack **stacka, t_stack **stackb);
int		targetfinder(t_stack **stacka, int index);
void	getminpos(t_stack **a, t_stack **b);
void	firstpush(t_stack **a, t_stack **b, int count);
void	b_calculator(t_stack **stackb, t_stack **stacka);
int		a_calculator(t_stack *stackb, t_stack **stacka);
t_stack	*bestmove(t_stack **a, t_stack **b);
int		abs(int i);
void	execute(t_stack **a, t_stack **b, t_stack *tbs);
void	execute2(t_stack **a, t_stack **b, t_stack *tbs);
int		nullcheck(char **argv);
#endif