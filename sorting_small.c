/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuthayak <tuthayak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 23:32:18 by tuthayak          #+#    #+#             */
/*   Updated: 2025/02/10 23:32:18 by tuthayak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Sort stack of size two
void	sort_two(t_stack *stack)
{
	if (stack->head->value > stack->head->next->value)
		sa(stack);
}

// Sort stack of size three
void	sort_three(t_stack *stack)
{
	int	a;
	int	b;
	int	c;

	a = stack->head->value;
	b = stack->head->next->value;
	c = stack->head->next->next->value;
	if (a > b && b < c && a < c)
		sa(stack);
	else if (a > b && b > c && a > c)
	{
		sa(stack);
		rra(&stack);
	}
	else if (a > b && b < c && a > c)
		ra(&stack);
	else if (a < b && b > c && a < c)
	{
		sa(stack);
		ra(&stack);
	}
	else if (a < b && b > c && a > c)
		rra(&stack);
}

// Sort stack of size four
void	sort_four(t_stack *a, t_stack *b)
{
	int	min_index;

	min_index = find_min_index(a);
	while (min_index != 0)
	{
		if (min_index <= 2)
			ra(&a);
		else
			rra(&a);
		min_index = find_min_index(a);
	}
	pb(a, b);
	sort_three(a);
	pa(a, b);
}

// Sort stack of size five
void	sort_five(t_stack *a, t_stack *b)
{
	int	min_index;

	min_index = find_min_index(a);
	while (min_index != 0)
	{
		if (min_index <= 2)
			ra(&a);
		else
			rra(&a);
		min_index = find_min_index(a);
	}
	pb(a, b);
	sort_four(a, b);
	pa(a, b);
}

// Find the index of the minimum value in the stack
int	find_min_index(t_stack *stack)
{
	int		min_index;
	int		min_value;
	int		index;
	t_node	*current;

	min_index = 0;
	min_value = stack->head->value;
	index = 0;
	current = stack->head;
	while (current)
	{
		if (current->value < min_value)
		{
			min_value = current->value;
			min_index = index;
		}
		current = current->next;
		index++;
	}
	return (min_index);
}
