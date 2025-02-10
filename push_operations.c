/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuthayak <tuthayak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:51:02 by tuthayak          #+#    #+#             */
/*   Updated: 2025/02/10 22:51:02 by tuthayak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Push the first element of stack B to stack A
void	pa(t_stack *a, t_stack *b)
{
	t_node	*temp;

	if (!b || !b->head)
		return ;
	temp = b->head;
	b->head = b->head->next;
	temp->next = a->head;
	a->head = temp;
	write(1, "pa\n", 3);
}

// Push the first element of stack A to stack B
void	pb(t_stack *a, t_stack *b)
{
	t_node	*temp;

	if (!a || !a->head)
		return ;
	temp = a->head;
	a->head = a->head->next;
	temp->next = b->head;
	b->head = temp;
	write(1, "pb\n", 3);
}
