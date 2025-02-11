# Push Swap Project

## Overview
The Push Swap project is a sorting algorithm implementation designed to sort a stack of integers using a limited set of operations. The goal is to sort the stack in ascending order while minimizing the number of operations performed. This project is part of the 42 curriculum and aims to improve algorithmic thinking and problem-solving skills.

## File Structure
```
├── Makefile                        # Compilation rules
├── README.md                       # Project documentation
├── push_swap.h                     # Header file
├── main.c                          # Entry point of the program
├── parsing.c                       # Argument parsing and validation
├── parsing_string.c                # String parsing functions
├── stack_utils.c                   # Stack initialization and utility functions
├── sorting.c                       # Main sorting algorithm
├── sorting_small.c                 # Sorting algorithm for small stacks
├── sorting_large_utils.c           # Helper functions for large stack sorting
├── rotate_operations.c             # Rotate operations (ra, rb, rr)
├── reverse_rotate_operations.c     # Reverse rotate operations (rra, rrb, rrr)
├── push_operations.c               # Push operations (pa, pb)
├── swap_operations.c               # Swap operations (sa, sb, ss)
├── ft_split.c                      # Custom implementation of split
└── error_handling.c                # Error handling functions
```

## Compilation
To compile the project, navigate to the project directory and run the following command:

```sh
make
```

This will generate the executable file named `push_swap`.

## Usage
To run the program, use the following command:

```sh
./push_swap <list_of_integers>
```

Replace `<list_of_integers>` with the integers you wish to sort, separated by spaces. For example:

```sh
./push_swap 3 2 1
```

The program also supports receiving a single string of space-separated integers as input:

```sh
./push_swap "3 4 6 8 9 74 -56 +495"
```

## Operations
The program supports the following operations:
- `sa`: Swap the first two elements of stack A.
- `sb`: Swap the first two elements of stack B.
- `ss`: Swap both stacks A and B.
- `pa`: Push the top element of stack B to stack A.
- `pb`: Push the top element of stack A to stack B.
- `ra`: Rotate stack A upwards.
- `rb`: Rotate stack B upwards.
- `rr`: Rotate both stacks A and B upwards.
- `rra`: Reverse rotate stack A downwards.
- `rrb`: Reverse rotate stack B downwards.
- `rrr`: Reverse rotate both stacks A and B downwards.

## Notes
- Ensure that the input integers are unique.
- The program will handle invalid inputs and provide appropriate error messages.
- Follow the Norme guidelines for code style and structure.

## Memory Management
The program is designed to be memory efficient and free all allocated memory. Use Valgrind to check for memory leaks:

```sh
valgrind --leak-check=full ./push_swap <list_of_integers>
```