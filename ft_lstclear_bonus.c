/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:14:30 by wrickard          #+#    #+#             */
/*   Updated: 2021/10/11 13:09:26 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*list;

	if (!del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		list = *lst;
		*lst = list->next;
		free(list);
	}
	*lst = NULL;
}
