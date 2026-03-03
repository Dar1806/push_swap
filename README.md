*This project has been created as part of the 42 curriculum by nmeunier.*

## Description

**push_swap** is a sorting algorithm project where the goal is to sort a stack of integers using a limited set of operations, with the lowest possible number of moves.

The program receives a list of integers as arguments and outputs a sequence of instructions to sort them. Two stacks are used (`a` and `b`), and only the following operations are allowed:

| Operation | Description |
|-----------|-------------|
| `sa` | Swap the first two elements of stack `a` |
| `sb` | Swap the first two elements of stack `b` |
| `pa` | Push the top element of stack `b` onto stack `a` |
| `pb` | Push the top element of stack `a` onto stack `b` |
| `ra` | Rotate stack `a` upward (first element becomes last) |
| `rb` | Rotate stack `b` upward (first element becomes last) |
| `rra` | Reverse rotate stack `a` (last element becomes first) |

### Sorting strategies

- **2–5 elements**: dedicated small-sort algorithms with hardcoded optimal moves.
- **6+ elements**: radix sort on indexed values using bitwise operations to distribute elements between the two stacks.

## Instructions

### Prerequisites

- A Unix-like system (Linux / macOS)
- `cc` (or `gcc`/`clang`)
- `make`

### Compilation

```bash
make        # Compile the project
make clean  # Remove object files
make fclean # Remove object files and the executable
make re     # Recompile from scratch
```

### Execution

```bash
./push_swap 3 2 1
# Output:
# sa
# rra

./push_swap "5 4 3 2 1"
# Arguments can also be passed as a single quoted string

./push_swap 42 | wc -l
# Count the number of operations
```

### Verifying the result

You can pipe the output into the official `checker` program (provided by 42) to verify correctness:

```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG
```