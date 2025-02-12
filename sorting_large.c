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

// Normalize the values of the stack to be in the range [0, size - 1]
void	normalize_values(t_stack *stack)
{
	t_node	*cur;
	int		*sorted_array;
	int		i;
	int		size;

	size = stack_size(stack);
	sorted_array = stack_to_sorted_array(stack);
	if (!sorted_array)
		return ;
	cur = stack->head;
	while (cur)
	{
		i = 0;
		while (i < size)
		{
			if (cur->value == sorted_array[i])
			{
				cur->value = i;
				break ;
			}
			i++;
		}
		cur = cur->next;
	}
	free(sorted_array);
}

// Convert the stack to a sorted array
int	*stack_to_sorted_array(t_stack *stack)
{
	int		*arr;
	t_node	*cur;
	int		i;
	int		size;

	size = stack_size(stack);
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	cur = stack->head;
	i = 0;
	while (cur)
	{
		arr[i++] = cur->value;
		cur = cur->next;
	}
	bubble_sort(arr, size);
	return (arr);
}

// Main sort function with bit shifting
void	radix_sort(t_stack *a, t_stack *b)
{
	int	max_bits;
	int	i;
	int	j;
	int	size;

	normalize_values(a);
	size = stack_size(a);
	max_bits = find_max_bits(size);
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			if (((a->head->value >> i) & 1) == 1)
				ra(&a);
			else
				pb(a, b);
		}
		while (stack_size(b) != 0)
			pa(a, b);
		i++;
	}
}
