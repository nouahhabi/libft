/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 03:01:10 by nouahhab          #+#    #+#             */
/*   Updated: 2021/12/06 03:38:35 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!(*lst))
		return ;
	while (*lst)
	{
		(*del)((*lst)->content);
		free (*lst);
		*lst = (*lst)->next;
	}
	*lst = NULL;
}
