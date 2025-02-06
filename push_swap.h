#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>

typedef struct s_stack
{
    int *data;
    int top;
    int size;
} t_stack;

void    init_stack(t_stack *stack, int size);
void    push(t_stack *stack, int value);
int     pop(t_stack *stack);
int     is_empty(t_stack *stack);
void    swap(t_stack *stack);
void    push_to(t_stack *src, t_stack *dest);
void    sort_stack(t_stack *stack_a, t_stack *stack_b);
void    free_stack(t_stack *stack);
void    error(const char *msg);
int     validate_input(int argc, char **argv);

#endif /* PUSH_SWAP_H */