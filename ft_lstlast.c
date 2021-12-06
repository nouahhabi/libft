/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 01:15:37 by nouahhab          #+#    #+#             */
/*   Updated: 2021/12/06 04:39:30 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*head;
	t_list	*p;

	if (!lst)
		return (NULL);
	head = lst;
	while (lst->next)
		lst = lst->next;
	p = lst;
	lst = head;
	return (p);
}

//int main ()
//{
//	t_list	*list;

//	list = ft_lstnew(ft_strdup("hh"));
//	list->next = ft_lstnew(ft_strdup("gg"));
//	list->next->next = ft_lstnew(ft_strdup("jj"));
//	list->next->next->next = ft_lstnew(ft_strdup("kk"));

//	t_list *ret = ft_lstlast(list);
//	ft_putendl_fd(ret->content, 1);

//}