#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    // Check for the correct number of arguments
    if (argc < 2)
    {
        fprintf(stderr, "Error: No arguments provided.\n");
        return 1;
    }

    // Initialize the stack and process input arguments
    t_stack *stack_a = init_stack(argc, argv);
    if (!stack_a)
    {
        fprintf(stderr, "Error: Stack initialization failed.\n");
        return 1;
    }

    // Call the sorting function
    sort_stack(stack_a);

    // Free allocated memory
    free_stack(stack_a);

    return 0;
}