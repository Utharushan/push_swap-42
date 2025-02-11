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

// Initialize stacks, fill with values, sort, and free memory
int	initialize_and_sort_stack(int *arr, int size)
{
	t_stack	*a;
	t_stack	*b;

	a = init_stack();
	b = init_stack();
	if (!a || !b)
	{
		free(arr);
		if (a)
			free_stack(&a);
		if (b)
			free_stack(&b);
		write(2, "Error\n", 6);
		return (1);
	}
	fill_stack(a, arr, size);
	free(arr);
	sort_stack(a, b, size);
	free_stack(&a);
	free_stack(&b);
	return (0);
}

// Main function to parse input, initialize stacks, and sort
int	main(int argc, char **argv)
{
	int		*arr;
	int		size;

	if (argc < 2)
		return (1);
	if (argc == 2)
	{
		arr = parse_string_input(argc, argv, &size);
		if (!arr)
		{
			write(2, "Error\n", 6);
			return (1);
		}
	}
	else
	{
		arr = parse_input(argc, argv, &size);
		if (!arr)
		{
			write(2, "Error\n", 6);
			return (1);
		}
	}
	return (initialize_and_sort_stack(arr, size));
}
