/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:32:16 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/08 22:58:19 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>


typedef struct s_stack
{
int value;
int index;
int pos;
int target_pos;
int cost_a;
int cost_b;
struct s_stack *next;
} t_stack;

size_t	ft_strlen(char *s);
int		ft_ofchercker(long max, long re, int s);
int		ft_atoi(char *str);
int		ft_subscounter(char *str, char c);
char	*coppier(char *s, int y, int x);
char	**ft_split(char *s, char c);
void	freemem(char **splited, int r);
char	**allocater(char *str, char c, int nsubs, char **splited);
t_stack *new_element(int value);
void	ft_putstrerror(char *s);
void	ft_putstr(char *s);
void	ft_error(int num,t_stack *stack);
int		check(char **argv);
int		onlysigncheck(char **argv);
int		signcheck(char **argv);
int		numcheck(char **argv);
void	check_for_duplicates(t_stack	*head);
int		emptystringcheck(char **argv);
int		listcount(t_stack *stack);
void 	free_stack(t_stack *stack);
void	swap(t_stack **stack);
void 	reverserotate(t_stack **stack);
void	pushop(t_stack **stack,t_stack **stackb);
void	pushback(t_stack **stack, t_stack *new_element);
void	pushfront(t_stack **stack, t_stack *new_element);
t_stack *buildb(t_stack *stacka,t_stack *stackb);
t_stack	*emptynewelement(void);
void	readstack(t_stack *stack);
void rotate(t_stack **stack);

#endif