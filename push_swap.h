/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuthayak <tuthayak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 23:50:29 by tuthayak          #+#    #+#             */
/*   Updated: 2025/02/10 23:50:29 by tuthayak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

// Define the stack and node structures
typedef struct s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

typedef struct s_stack
{
	t_node			*head;
}					t_stack;

// Function prototypes
void	radix_sort(t_stack *a, t_stack *b);
int		stack_size(t_stack *stack);
int		find_max_bits(int size);
void	move_back_elements(t_stack *a, t_stack *b);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	ra(t_stack **a);
void	rb(t_stack **b);
void	rr(t_stack **a, t_stack **b);
void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	sort_two(t_stack *stack);
void	sort_three(t_stack *stack);
void	sort_four(t_stack *a, t_stack *b);
void	sort_five(t_stack *a, t_stack *b);
t_stack	*init_stack(void);
void	stack_add_back(t_stack **stack, t_node *new);
t_node	*stack_new(int value);
void	free_stack(t_stack **stack);
int		*parse_input(int argc, char **argv, int *size);
t_stack	*parse_string_to_stack(const char *str);
int		*parse_string_input(int argc, char **argv, int *size);
char	**ft_split(const char *s, char c);
void	free_split(char **split);
void	fill_stack(t_stack *stack, int *arr, int size);
int		is_valid_number(char *str);
int		has_duplicates(int *arr, int size);
int		is_within_int_range(char *str);
long	ft_atol(const char *str);
int		ft_atoi(const char *str);
int		ft_isdigit(int c);
int		find_min_index(t_stack *stack);

#endif
