#include "push_swap.h"
#include <stdlib.h>
#include <unistd.h>

void    error_exit(const char *msg)
{
    write(2, msg, ft_strlen(msg));
    exit(EXIT_FAILURE);
}

int     ft_strlen(const char *str)
{
    int len = 0;

    while (str[len])
        len++;
    return (len);
}

int     is_number(const char *str)
{
    int i = 0;

    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

void    free_stack(int **stack)
{
    free(*stack);
    free(stack);
}