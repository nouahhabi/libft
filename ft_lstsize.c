/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 00:54:33 by nouahhab          #+#    #+#             */
/*   Updated: 2021/12/06 01:13:47 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*head;
	int		i;

	i = 0;
	head = lst;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	lst = head;
	return (i);
}
