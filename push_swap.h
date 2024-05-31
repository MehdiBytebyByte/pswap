/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:32:16 by mboughra          #+#    #+#             */
/*   Updated: 2024/05/31 20:40:35 by mboughra         ###   ########.fr       */
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
void	push(t_stack **stack, t_stack *new_element);
void	ft_putstrerror(char *s);
void	ft_putstr(char *s);
void	ft_error(int num,t_stack *stack);

#endif