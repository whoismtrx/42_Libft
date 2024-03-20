# Libft

![](https://github.com/whoismtrx/42_Libft/blob/main/Libft.gif)

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

- [ft_isalpha](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_isalpha.c): checks if the character is an alphabetic character.
- [ft_isdigit](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_isdigit.c): checks if the character is a digit.
- [ft_isalnum](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_isalnum.c): checks if the character is an alphanumeric character.
- [ft_isascii](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_isascii.c): checks if the character is a 7-bit ASCII character.
- [ft_isprint](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_isprint.c): checks if the character is a printable character.
- [ft_strlen](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_strlen.c): calculates the length of a string.
- [ft_memset](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_memset.c): fills a block of memory with a byte value.
- [ft_bzero](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_bzero.c): writes zeros to a byte string.
- [ft_memcpy](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_memcpy.c): copies memory area from source to destination.
- [ft_memmove](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_memmove.c): copies memory area with overlapping memory blocks.
- [ft_strlcpy](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_strlcpy.c): copies a string to a fixed-size buffer.
- [ft_strlcat](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_strlcat.c): appends a string to a fixed-size buffer.
- [ft_toupper](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_toupper.c): converts a lowercase letter to uppercase.
- [ft_tolower](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_tolower.c): converts an uppercase letter to lowercase.
- [ft_strchr](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_strchr.c): locates the first occurrence of a character in a string.
- [ft_strrchr](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_strrchr.c): locates the last occurrence of a character in a string.
- [ft_strncmp](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_strncmp.c): compares two strings up to a certain number of characters.
- [ft_memchr](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_memchr.c): locates the first occurrence of a character in a memory block.
- [ft_memcmp](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_memcmp.c): compares two memory blocks.
- [ft_strnstr](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_strnstr.c): locates a substring in a string.
- [ft_atoi](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_atoi.c): converts a string to an integer.
- [ft_calloc](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_calloc.c): allocates memory for an array and initializes it with zeros.
- [ft_strdup](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_strdup.c): duplicates a string in memory with allocation.

#### Part 2 - Additional functions

- [ft_substr](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_substr.c): allocates and returns a substring from a string.
- [ft_strjoin](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_strjoin.c): concatenates two strings into a new string.
- [ft_strtrim](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_strtrim.c): trims the beginning and end of a string with a set of characters.
- [ft_split](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_split.c): splits a string into an array of strings using a delimiter character.
- [ft_itoa](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_itoa.c): converts an integer to a string.
- [ft_strmapi](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_strmapi.c): applies a function to each character of a string to create a new string.
- [ft_striteri](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_striteri.c): applies a function to each character of a string with its index.
- [ft_putchar_fd](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_putchar_fd.c): outputs a character to a file descriptor.
- [ft_putstr_fd](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_putstr_fd.c): outputs a string to a file descriptor.
- [ft_putendl_fd](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_putendl_fd.c): outputs a string to a file descriptor followed by a newline.
- [ft_putnbr_fd](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_putnbr_fd.c): outputs an integer to a file descriptor.

### Bonus

- [ft_lstnew](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_lstnew.c): creates a new element for a linked list.
- [ft_lstadd_front](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_lstadd_front.c): adds a new element at the beginning of a linked list.
- [ft_lstsize](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_lstsize.c): counts the number of elements in a linked list.
- [ft_lstlast](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_lstlast.c): returns the last element of a linked list.
- [ft_lstadd_back](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_lstadd_back.c): adds a new element at the end of a linked list.
- [ft_lstdelone](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_lstdelone.c): deletes an element from a linked list.
- [ft_lstclear](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_lstclear.c): deletes all elements from a linked list.
- [ft_lstiter](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_lstiter.c): applies a function to each element of a linked list.
- [ft_lstmap](https://github.com/whoismtrx/42_Libft/blob/main/sources/ft_lstmap.c): applies a function to each element of a linked list to create a new list.

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
