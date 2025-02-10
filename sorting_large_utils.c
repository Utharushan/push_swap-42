/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_large_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuthayak <tuthayak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 23:37:05 by tuthayak          #+#    #+#             */
/*   Updated: 2025/02/10 23:37:05 by tuthayak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Find the maximum number of bits needed to represent the largest number
int	find_max_bits(int size)
{
	int	max_bits;

	max_bits = 0;
	while ((size - 1) >> max_bits != 0)
		max_bits++;
	return (max_bits);
}

// Move elements based on the current bit
void	move_elements(t_stack *a, t_stack *b, int bit)
{
	int		size;
	int		i;
	t_node	*current;

	size = stack_size(a);
	i = 0;
	while (i < size)
	{
		current = a->head;
		if (((current->value >> bit) & 1) == 1)
			ra(&a);
		else
			pb(a, b);
		i++;
	}
}

// Move elements back from stack B to stack A
void	move_back_elements(t_stack *a, t_stack *b)
{
	while (stack_size(b) != 0)
		pa(a, b);
}
