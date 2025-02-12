/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuthayak <tuthayak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 23:26:30 by tuthayak          #+#    #+#             */
/*   Updated: 2025/02/10 23:26:30 by tuthayak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Initialize the stack
t_stack	*init_stack(void)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->head = NULL;
	return (stack);
}

// Get the size of the stack
int	stack_size(t_stack *stack)
{
	int		size;
	t_node	*current;

	size = 0;
	current = stack->head;
	while (current)
	{
		size++;
		current = current->next;
	}
	return (size);
}

// Add a new node to the back of the stack
void	stack_add_back(t_stack **stack, t_node *new)
{
	t_node	*current;

	if (!stack || !new)
		return ;
	if (!(*stack)->head)
	{
		(*stack)->head = new;
		return ;
	}
	current = (*stack)->head;
	while (current->next)
		current = current->next;
	current->next = new;
}

// Create a new node
t_node	*stack_new(int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->value = value;
	new_node->next = NULL;
	return (new_node);
}

// Free the stack
void	free_stack(t_stack **stack)
{
	t_node	*current;
	t_node	*tmp;

	if (!stack || !(*stack))
		return ;
	current = (*stack)->head;
	while (current)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	free(*stack);
	*stack = NULL;
}
