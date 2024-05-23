/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 21:32:16 by mboughra          #+#    #+#             */
/*   Updated: 2024/05/20 23:36:48 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct
{
    Node *top;
} Stack;

int		ft_ofchercker(long max, long re, int s);
int		ft_atoi(char *str);
int		ft_subscounter(char *str, char c);
char	*coppier(char *s, int y, int x);
char	**ft_split(char *s, char c);
void	freemem(char **splited, int r);
char	**allocater(char *str, char c, int nsubs, char **splited);


#endif