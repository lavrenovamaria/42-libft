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

## Linked list analysis.
A linked list is a list in which linear data structure nodes are not stored consecutively in memory as shown in the picture connect by pointer below. There is a pointer to the first node of the linked list (the head variable in the picture below). Each node consists of a datavariable that stores a value and a pointer variable that stores the address of the next node next.

Difference between *lst == NULL and lst == NULL
* If lst is NULL, it means that the list itself does not exist.
* *lst means the first address of lst, head, so there is no node in the list.

## Implementation of: 
###  ft_lstadd_back
Purpose of ft_lstadd_back is to add a new t_list node to the end of the t_list linked list lst.

![lstadd_back](https://user-images.githubusercontent.com/84707645/133746743-470f1b56-5242-4cf8-b312-99d8d5ffea8c.jpg)


###  ft_lstadd_front
Purpose of ft_lstadd_back is to add a t_list node called new to the beginning of the t_list linked list lst.

![lstadd_front](https://user-images.githubusercontent.com/84707645/133750541-47e69ea3-743c-44f8-a7f3-64b679649149.jpg)

###  ft_lstclear
Purpose: **lst that stores the address of the t_list pointer and a function that deletes the contents of the list, del() A function that receives a pointer as input and deletes the nodes of the list and the contents of the nodes.
1. If lst is NULL, return because there is no list to delete, if del is NULL, the contents of lst cannot be freed, so return;
2. If the del() function is NULL, the function to free the contents of the lst cannot be performed, so return;
3. Delete the contents of lst until lst is not NULL
4. Before deletion, put the address of the next node in the t_list list(tmp) variable.
5. Delete the contents of the lst through the del() function.
6. Substitute the address value of t_list list(tmp) into lst so that lst points to the address of the next node.
7. Repeat 4, 5, 6.

![lstclear](https://user-images.githubusercontent.com/84707645/133753403-aec715f1-9b67-40ca-b278-ddcb48df9ada.jpg)

###  ft_lstdelone
In the ft_lstdelone function, the t_list pointer pointing to the address of the node to be removed is lst, and the function pointer to delete the contents of the lst is del(). That is, lst is a t_list pointer, and the del function must be used to remove the contents of lst.
1. If lst is NULL, it means that the list is empty. In this case, there is no list to delete, so return;
2. If the del() function is NULL, the function to free the contents of the lst cannot be performed, so return;
3. Free the contents of the lst through the del function.
4. Free the lst

###  ft_lstnew
A function that creates a new node by using the variable content received as an argument as the content of the new node. A new node is created by filling the new node's content with the content received as an argument, and NULL for the new node's next.
1. The address of the created new node is stored in the t_list type pointer new. If malloc fails to allocate as much memory as the size of t_list, NULL is returned.
2. Declare the t_list pointer variable new to store the new node.
3. Allocate memory as much as the size of t_list to new with malloc, but return NULL if allocation fails.
4. After assignment, NULL is assigned to next of new, and content received as an argument is assigned to content.
5. Return new.

###  ft_lstlast
A function that points the t_list pointer lst received as a parameter to the "last node".
1. If lst is NULL, it means that the list is empty. In this case, the last node cannot be pointed to, so return (NULL);
2. The existence of next of lst means that lst is not the last node. Therefore, the list is searched until next of lst is not NULL.
3. If lst is NULL, the node cannot be pointed to because the list is empty. So return (NULL);
4. If the next of lst exists, it means that lst is not the last node, so lst->next is searched until lst->next is not NULL.
5. If next of lst is NULL, current lst is the last node. So return (lst);

###  ft_lstiter
A function that applies f to the contents of the t_list pointer lst and all lists linked to that lst. In the ft_lstiter function, the t_list pointer variable lstis f() and the function pointer to be applied to the content of the lst is f(). That is, lst is a t_list pointer, and f function must be used to apply f to the contents of lst.
*lst is a pointer, so if lst is changed to lst->next, the value of lst is changed not only in the called function but also in the entire code.
--> Therefore, after storing the address of the lst in the t_list pointer called tmp, the list is searched using tmp.
1. Search the list using tmp, apply f to tmp's content, and make tmp point to tmp's next address.

###  ft_lstmap
A function that creates a new linked list by applying the f function to each content of the linked list received as a parameter. In case of failure to malloc a new node, the contents of all newly created lsts and lsts are freed.
If lst is NULL, it means that the list is empty. You should use the content of the lst, but since the lst is empty, you can return NULL. This part is not implemented separately, and if lst is NULL, the while statement is not executed node returns NULL.
The ft_lstnew()use already implemented when creating a new node newnode with the contents of lst . For the ft_lstnew function, see the ft_lstnew implementation of libft.

###  ft_lstmap
A function to find the length of the linked list received as an argument.
In the ft_lstsize function, the t_list pointer pointing to the first node of the lstlinked list is , and the length of this linked list should be obtained and returned.
1. Declare the int type variable size to store the size of the linked list.
2. Store the next of the lst in size++ and lst until lst is not NULL.
3. Return size.
