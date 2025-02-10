/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_operations.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuthayak <tuthayak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:59:23 by tuthayak          #+#    #+#             */
/*   Updated: 2025/02/10 22:59:23 by tuthayak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Rotate stack A down by one
void	rra(t_stack **a)
{
	t_node	*prev;
	t_node	*last;

	if (!a || !(*a) || !(*a)->head || !(*a)->head->next)
		return ;
	prev = NULL;
	last = (*a)->head;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = (*a)->head;
	(*a)->head = last;
	write(1, "rra\n", 4);
}

// Rotate stack B down by one
void	rrb(t_stack **b)
{
	t_node	*prev;
	t_node	*last;

	if (!b || !(*b) || !(*b)->head || !(*b)->head->next)
		return ;
	prev = NULL;
	last = (*b)->head;
	while (last->next)
	{
		prev = last;
		last = last->next;
	}
	prev->next = NULL;
	last->next = (*b)->head;
	(*b)->head = last;
	write(1, "rrb\n", 4);
}

// Rotate both stacks A and B down by one
void	rrr(t_stack **a, t_stack **b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}
