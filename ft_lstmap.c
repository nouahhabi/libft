/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 03:12:07 by nouahhab          #+#    #+#             */
/*   Updated: 2021/12/06 04:18:33 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*new;

	if (!lst)
		return (NULL);
	p = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		ft_lstadd_back(&p, new);
		lst = lst->next;
	}
	return (p);
}

//void *func(void *str)
//{
//	return (ft_strdup("hh"));
//}

//void del(void *add)
//{
//	free(add);
//}

//int main ()
//{
//	t_list *list;

//	list = ft_lstnew(ft_strdup("hello"));
//	list->next = ft_lstnew(ft_strdup("bonjour"));
//	list->next->next = ft_lstnew(ft_strdup("hola"));

//	t_list *ret = ft_lstmap(list, &func, &del);

//	while(ret)
//	{
//		ft_putendl_fd(ret->content, 1);
//		ret = ret->next;
//	}
//}
