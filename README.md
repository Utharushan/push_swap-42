# Push Swap Project

## Overview
The Push Swap project is a sorting algorithm implementation designed to sort a stack of integers using a limited set of operations. The goal is to sort the stack in ascending order while minimizing the number of operations performed.

## File Structure
```
push_swap
├── src
│   ├── main.c
│   ├── push_swap.c
│   ├── utils.c
│   └── sort.c
├── include
│   └── push_swap.h
├── Makefile
└── README.md
```

## Compilation
To compile the project, navigate to the project directory and run the following command:

```
make
```

This will generate the executable file named `push_swap`.

## Usage
To run the program, use the following command:

```
./push_swap <list_of_integers>
```

Replace `<list_of_integers>` with the integers you wish to sort, separated by spaces. For example:

```
./push_swap 3 2 1
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

## Author
This project was developed as part of the 42 cursus.