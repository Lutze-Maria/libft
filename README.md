*This project has been created as part of the 42 curriculum by lschawer.*
# Libft


## Description
This project involves coding a C library that includes numerous general purpose
functions for following programs.

This project aims to help me understand how these functions work by implementing them myself and learning to use them effectively. I created my own library,
which will be valuable for my future C school assignments.


## Instructions
**Compilation**

The Makefile compiles with the flags `-Wall`, `-Wextra`, and `-Werror`, using `cc`.
The Makefile contains the following rules:

make all = default rule to create `libft.a`

make clean = deletes the object files generated during compilation

make fclean = deletes the object files AND the library (`libft.a`)

make re = performs `fclean` followed by an `all` to re-compile everything from scratch

**Using Libft**
To use Libft in your project, include the header and link the library:
cc main.c -L. -lft


## Resources
To build this library I have used the following resources:
• subject.pdf: Detailed assignment requirements.
• man7.org: Linux manual pages for standard functions.
• 42-cursus.gitbook.io: Simplified descriptions and logic for non-standard functions.
• libftTester (Tripouille): Unit testing for all functions.
• CS50 & freeCodeCamp: Conceptual learning for linked lists.
• AI Assistance: Used for clarifying concepts (e.g., understanding double pointers lst).


## Detailed description of library
The library is divided into three main sections based on the function types:

**1. Libc Functions**
Standard C library functions redefined to understand their inner workings.

Memory: `memset`, `bzero`, `memcpy`, `memmove`, `memchr`, `memcmp`, `calloc`.
Strings: `strlen`, `strlcpy`, `strlcat`, `strchr`, `strrchr`, `strnstr`, `strncmp`.
Conversion & Checks: `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`, `toupper`, `tolower`, `atoi`.

**2. Additional Functions**
Non-standard C functions that are highly useful for string manipulation and memory allocation.

`ft_substr`: Extracts a substring from a string.
`ft_strjoin`: Concatenates two strings into a new one.
`ft_strtrim`: Trims specific characters from the beginning and end of a string.
`ft_split`: Splits a string into an array of strings using a delimiter.
`ft_itoa`: Converts an integer to a string.
`ft_strmapi` / `ft_striteri`: Applies a function to each character of a string.
`ft_putchar_fd` / `ft_putstr_fd` / `ft_putendl_fd` / `ft_putnbr_fd`: Output functions using file descriptors.

**3. Linked Lists**
A set of functions to manipulate a linked list structure (t_list).

`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.
