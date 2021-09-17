# 42-libft
## Reimplementation of some of the Standard C Library functions.

This repository contains some of the standard library C functions.
List of available functions is presented in the subject [en.subject.pdf](https://github.com/lavrenovamaria/42-libft/files/7067065/en.subject.pdf)


## Usage
Using Makefile you can create library file libft.a
* `make` without bonus functions.
* `make bonus` to compile with bonuses.
* `make clean` to clean all object files.
* `make fclean` to clean libft.a and all object files.
* `make re` to recompile the library.

## Linked list analysis. Implementation of:

## * ft_lstadd_back
1. Purpose of ft_lstadd_back is to add a new t_list node to the end of the t_list linked list lst.
2. A linked list is a list in which linear data structure nodes are not stored consecutively in memory as shown in the picture connect by pointer below. There is a pointer to the first node of the linked list (the head variable in the picture below). Each node consists of a datavariable that stores a value and a pointer variable that stores the address of the next node next.

![lstadd_back](https://user-images.githubusercontent.com/84707645/133746743-470f1b56-5242-4cf8-b312-99d8d5ffea8c.jpg)
3. Difference between *lst == NULL and lst == NULL
* If lst is NULL, it means that the list itself does not exist.
* *lst means the first address of lst, head, so there is no node in the list.

___
