/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuthayak <tuthayak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 23:31:25 by tuthayak          #+#    #+#             */
/*   Updated: 2025/02/10 23:31:25 by tuthayak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Count total numbers in arguments (to allocate memory)
static int	count_total_numbers(char **argv)
{
	int		i;
	int		count;
	char	**split;

	i = 1;
	count = 0;
	while (argv[i])
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			return (-1);
		while (split[count])
			count++;
		free_split(split);
		i++;
	}
	return (count);
}

// Convert arguments to an array of integers
static int	convert_arguments_to_array(char **argv, int *arr)
{
	int		i;
	int		j;
	int		k;
	char	**split;

	i = 1;
	k = 0;
	while (argv[i])
	{
		split = ft_split(argv[i], ' ');
		if (!split)
			return (0);
		j = 0;
		while (split[j])
		{
			if (!is_valid_number(split[j]) || !is_within_int_range(split[j]))
				return (free(arr), free_split(split), 0);
			arr[k++] = ft_atoi(split[j]);
			j++;
		}
		free_split(split);
		i++;
	}
	return (1);
}

// Parse input arguments into an integer array
int	*parse_string_input(int argc, char **argv, int *size)
{
	int	*arr;
	int	total_numbers;

	(void)argc;
	total_numbers = count_total_numbers(argv);
	if (total_numbers <= 0)
		return (NULL);
	arr = malloc(sizeof(int) * total_numbers);
	if (!arr)
		return (NULL);
	if (!convert_arguments_to_array(argv, arr))
		return (NULL);
	*size = total_numbers;
	if (has_duplicates(arr, *size))
		return (free(arr), NULL);
	return (arr);
}
