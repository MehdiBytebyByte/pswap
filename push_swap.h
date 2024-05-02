/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:58:03 by mboughra          #+#    #+#             */
/*   Updated: 2024/05/01 19:41:00 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;

typedef struct Stack
{
    Node* top;
}Stack;