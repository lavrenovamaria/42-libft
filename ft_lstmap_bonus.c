/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrickard <wrickard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:24:04 by wrickard          #+#    #+#             */
/*   Updated: 2021/10/11 19:21:19 by wrickard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*iter_lst;

	if (!lst)
		return (0);
	new_lst = ft_lstnew(f(lst->content));
	if (!new_lst)
		return (0);
	lst = lst->next;
	iter_lst = new_lst;
	while (lst)
	{
		iter_lst->next = ft_lstnew(f(lst->content));
		iter_lst = iter_lst->next;
		if (!iter_lst)
		{
			ft_lstclear(&new_lst, del);
			return (0);
		}
		lst = lst->next;
	}
	return (new_lst);
}
