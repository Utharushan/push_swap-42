/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuthayak <tuthayak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:57:32 by tuthayak          #+#    #+#             */
/*   Updated: 2025/02/10 22:57:32 by tuthayak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Rotate stack A up by one
void	ra(t_stack **a)
{
	t_node	*first;
	t_node	*last;

	if (!a || !(*a) || !(*a)->head || !(*a)->head->next)
		return ;
	first = (*a)->head;
	last = (*a)->head;
	while (last->next)
		last = last->next;
	(*a)->head = first->next;
	first->next = NULL;
	last->next = first;
	write(1, "ra\n", 3);
}

// Rotate stack B up by one
void	rb(t_stack **b)
{
	t_node	*first;
	t_node	*last;

	if (!b || !(*b) || !(*b)->head || !(*b)->head->next)
		return ;
	first = (*b)->head;
	last = (*b)->head;
	while (last->next)
		last = last->next;
	(*b)->head = first->next;
	first->next = NULL;
	last->next = first;
	write(1, "rb\n", 3);
}

// Rotate both stacks A and B up by one
void	rr(t_stack **a, t_stack **b)
{
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}
