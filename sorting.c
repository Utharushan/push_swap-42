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
