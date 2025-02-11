/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuthayak <tuthayak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:34:12 by tuthayak          #+#    #+#             */
/*   Updated: 2025/02/11 21:34:12 by tuthayak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Parse input arguments into an array of integers
int	*parse_input(int argc, char **argv, int *size)
{
	int		*arr;
	int		i;

	arr = malloc(sizeof(int) * (argc - 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < argc - 1)
	{
		if (!is_valid_number(argv[i + 1]) || !is_within_int_range(argv[i + 1]))
		{
			free(arr);
			return (NULL);
		}
		arr[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	*size = argc - 1;
	if (has_duplicates(arr, *size))
	{
		free(arr);
		return (NULL);
	}
	return (arr);
}

// Fill the stack with values from the array
void	fill_stack(t_stack *stack, int *arr, int size)
{
	int		i;
	t_node	*new_node;

	i = 0;
	while (i < size)
	{
		new_node = stack_new(arr[i]);
		if (!new_node)
		{
			free_stack(&stack);
			return ;
		}
		stack_add_back(&stack, new_node);
		i++;
	}
}

// Convert a string to an integer
int	ft_atoi(const char *str)
{
	int		result;
	int		sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
