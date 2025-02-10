/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuthayak <tuthayak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:49:18 by tuthayak          #+#    #+#             */
/*   Updated: 2025/02/10 22:49:18 by tuthayak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Swap the first two elements of stack A
void	sa(t_stack *a)
{
	int	temp;

	if (!a || !a->head || !a->head->next)
		return ;
	temp = a->head->value;
	a->head->value = a->head->next->value;
	a->head->next->value = temp;
	write(1, "sa\n", 3);
}

// Swap the first two elements of stack B
void	sb(t_stack *b)
{
	int	temp;

	if (!b || !b->head || !b->head->next)
		return ;
	temp = b->head->value;
	b->head->value = b->head->next->value;
	b->head->next->value = temp;
	write(1, "sb\n", 3);
}

// Swap the first two elements of both stacks
void	ss(t_stack *a, t_stack *b)
{
	sa(a);
	sb(b);
	write(1, "ss\n", 3);
}
