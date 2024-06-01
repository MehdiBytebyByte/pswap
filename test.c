/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboughra <mboughra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 01:33:19 by mboughra          #+#    #+#             */
/*   Updated: 2024/06/01 01:39:34 by mboughra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

typedef struct s_stack
{
	int i;
	struct s_stack *next;
} t_stack;


void	push(t_stack **stack, t_stack *new_element)
{
	if (!new_element)
		return ;
	new_element->next = *stack;
	*stack = new_element;
};

int main(int argc, char const *argv[])
{
	t_stack *element1;
	t_stack *element2;
	
	element1 = (t_stack *)malloc(sizeof(t_stack));
	element2 = (t_stack *)malloc(sizeof(t_stack));
	
	element1->i = 1;
	element2->i = 2;
	
	push(&element1, element2);

	t_stack *temp;
	temp = element1;
	
	printf("%d",element1->i);
	
	// while (temp)
	// {
	// 	printf("--> %d\n",temp->i);
	// 	temp = temp->next;
	// };
	
	
	return (0);
}
