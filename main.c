/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuthayak <tuthayak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 23:55:00 by tuthayak          #+#    #+#             */
/*   Updated: 2025/02/10 23:55:00 by tuthayak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Sort the stack based on its size
void	sort_stack(t_stack *a, t_stack *b, int size)
{
	if (size <= 5)
	{
		if (size == 2)
			sort_two(a);
		else if (size == 3)
			sort_three(a);
		else if (size == 4)
			sort_four(a, b);
		else if (size == 5)
			sort_five(a, b);
	}
	else
		radix_sort(a, b);
}

// Main function to parse input, initialize stacks, and sort
int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		*arr;
	int		size;

	if (argc < 2)
		return (1);
	arr = parse_input(argc, argv, &size);
	if (!arr)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	a = init_stack();
	b = init_stack();
	if (!a || !b)
		return (free(arr), write(2, "Error\n", 6), 1);
	fill_stack(a, arr, size);
	free(arr);
	sort_stack(a, b, size);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
