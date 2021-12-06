/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 01:24:06 by nouahhab          #+#    #+#             */
/*   Updated: 2021/12/06 03:47:05 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*head;

	if (!(*alst))
	{
		*alst = new;
		return ;
	}
	head = *alst;
	while ((*alst)->next)
		*alst = (*alst)->next;
	(*alst)->next = new;
	*alst = head;
}
