#include "push_swap.h"

void sort_stack(int *stack_a, int *stack_b, int size_a, int size_b)
{
    // Implement the sorting algorithm logic here
    // This function will handle the sorting of the stack_a
    // and use stack_b for temporary storage during the process.
}

void sa(int *stack_a, int size)
{
    if (size > 1)
    {
        int temp = stack_a[0];
        stack_a[0] = stack_a[1];
        stack_a[1] = temp;
    }
}

void sb(int *stack_b, int size)
{
    if (size > 1)
    {
        int temp = stack_b[0];
        stack_b[0] = stack_b[1];
        stack_b[1] = temp;
    }
}

void pa(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
    int i;

    if (*size_b > 0)
    {
        i = *size_a;
        while (i > 0)
        {
            stack_a[i] = stack_a[i - 1];
            i--;
        }
        stack_a[0] = stack_b[0];
        i = 0;
        while (i < *size_b - 1)
        {
            stack_b[i] = stack_b[i + 1];
            i++;
        }
        (*size_a)++;
        (*size_b)--;
    }
}

void pb(int *stack_a, int *stack_b, int *size_a, int *size_b)
{
    int i;

    if (*size_a > 0)
    {
        i = *size_b;
        while (i > 0)
        {
            stack_b[i] = stack_b[i - 1];
            i--;
        }
        stack_b[0] = stack_a[0];
        i = 0;
        while (i < *size_a - 1)
        {
            stack_a[i] = stack_a[i + 1];
            i++;
        }
        (*size_a)--;
        (*size_b)++;
    }
}
