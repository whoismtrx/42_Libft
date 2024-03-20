# Libft

## Overview

This project remakes some usual C language functions and adds a few new ones that will help students. The main goal is to make a set of functions that can be used again in later work, so students don't have to write them from scratch each time. This set of functions will be needed for most projects at 42. the project is a great opportunity to improve your skills in C programming and to learn about the structure of a library.

## Key Features

The project contains 2 parts: `Mandatory` and `Bonus`. you need also to create a `Makefile` that compiles the library and a `libft.h` file which outputs an archive called `libft.a`.
- `Mandatory` part contains functions from `Libc` and `Additional` ones that are useful for everyday programming.
- `Bonus` part contains functions that are useful for linked list manipulation.

## Getting Started

to get started with using `libft`, clone the repository and compile the library using the provided Makefile.
```
git clone https://github.com/whoismtrx/42_Libft.git libft
cd libft
make
```

## Usage

to use the library in your project, include the `libft.h` header file in your source code and link the library when compiling.
```
// example.c
#include "libft.h"
```
```
cc example.c libft.a -o example
```

## Functions

### Mandatory

#### Part 1 - Libc functions

- `ft_isalpha`: checks if the character is an alphabetic character.
- `ft_isdigit`: checks if the character is a digit.
- `ft_isalnum`: checks if the character is an alphanumeric character.
- `ft_isascii`: checks if the character is a 7-bit ASCII character.
- `ft_isprint`: checks if the character is a printable character.
- `ft_strlen`: calculates the length of a string.
- `ft_memset`: fills a block of memory with a byte value.
- `ft_bzero`: writes zeros to a byte string.
- `ft_memcpy`: copies memory area from source to destination.
- `ft_memmove`: copies memory area with overlapping memory blocks.
- `ft_strlcpy`: copies a string to a fixed-size buffer.
- `ft_strlcat`: appends a string to a fixed-size buffer.
- `ft_touppper`: converts a lowercase letter to uppercase.
- `ft_tolower`: converts an uppercase letter to lowercase.
- `ft_strchr`: locates the first occurrence of a character in a string.
- `ft_strrchr`: locates the last occurrence of a character in a string.
- `ft_strncmp`: compares two strings up to a certain number of characters.
- `ft_memchr`: locates the first occurrence of a character in a memory block.
- `ft_memcmp`: compares two memory blocks.
- `ft_strnstr`: locates a substring in a string.
- `ft_atoi`: converts a string to an integer.
- `ft_calloc`: allocates memory for an array and initializes it with zeros.
- `ft_strdup`: duplicates a string in memory with allocation.

#### Part 2 - Additional functions

- `ft_substr`: allocates and returns a substring from a string.
- `ft_strjoin`: concatenates two strings into a new string.
- `ft_strtrim`: trims the beginning and end of a string with a set of characters.
- `ft_split`: splits a string into an array of strings using a delimiter character.
- `ft_itoa`: converts an integer to a string.
- `ft_strmapi`: applies a function to each character of a string to create a new string.
- `ft_striteri`: applies a function to each character of a string with its index.
- `ft_putchar_fd`: outputs a character to a file descriptor.
- `ft_putstr_fd`: outputs a string to a file descriptor.
- `ft_putendl_fd`: outputs a string to a file descriptor followed by a newline.
- `ft_putnbr_fd`: outputs an integer to a file descriptor.

### Bonus

- `ft_lstnew`: creates a new element for a linked list.
- `ft_lstadd_front`: adds a new element at the beginning of a linked list.
- `ft_lstsize`: counts the number of elements in a linked list.
- `ft_lstlast`: returns the last element of a linked list.
- `ft_lstadd_back`: adds a new element at the end of a linked list.
- `ft_lstdelone`: deletes an element from a linked list.
- `ft_lstclear`: deletes all elements from a linked list.
- `ft_lstiter`: applies a function to each element of a linked list.
- `ft_lstmap`: applies a function to each element of a linked list to create a new list.

## Resources

As a student, you can use the following resources to help you understand the C Language and the project better:
- `C Language`: this playlist on [C Language Tutorial](https://www.youtube.com/watch?v=si-KFFOW2gw&list=PLVlQHNRLflP8IGz6OXwlV_lgHgc72aXlh&index=3&ab_channel=NareshiTechnologies) will help you understand more than the basics of the C language.
- `Pointers`: this video on [Pointers in C/C++](https://www.youtube.com/watch?v=zuegQmMdy8M&ab_channel=freeCodeCamp.org) from [freeCodeCamp](https://www.youtube.com/@freecodecamp) will help you understand pointers in C.
- `Libc functions`: you can find more information about these functions in the `man` pages visit the [man7.org](https://man7.org/linux/man-pages/man7/man.7.html) or type on your terminal
	```
	man strlen
	or
	man 3 strlen
	```
- `Linked Lists`: this video on [Linked Lists Introduction](https://www.youtube.com/watch?v=-Yn5DU0_-lw&list=PLDV1Zeh2NRsB6SWUrDFW2RmDotAfPbeHu&index=6) from [WilliamFiset](https://www.youtube.com/@WilliamFiset-videos) will help you understand them and how to manipulate them. if you want to learn more about [Doubly Linked lists](https://www.youtube.com/watch?v=m-8ZBO2ywaU&list=PLDV1Zeh2NRsB6SWUrDFW2RmDotAfPbeHu&index=7), you can see the part two.
- `Makefile`: look at [EASY MAKEFILES](https://pulgamecanica.herokuapp.com/posts/makefiles)
