/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuthayak <tuthayak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 23:44:00 by tuthayak          #+#    #+#             */
/*   Updated: 2025/02/10 23:44:00 by tuthayak         ###   ########.fr       */
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

// Move elements back from stack B to stack A
void	move_back_elements(t_stack *a, t_stack *b)
{
	while (stack_size(b) != 0)
		pa(a, b);
}

// Radix sort implementation
void	radix_sort(t_stack *a, t_stack *b)
{
	int		max_bits;
	int		i;
	int		j;
	int		size;
	t_node	*current;

	size = stack_size(a);
	max_bits = find_max_bits(size);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			current = a->head;
			if (((current->value >> i) & 1) == 1)
				ra(&a);
			else
				pb(a, b);
			j++;
		}
		move_back_elements(a, b);
		i++;
	}
}
