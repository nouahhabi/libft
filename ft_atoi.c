/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:35:27 by nouahhab          #+#    #+#             */
/*   Updated: 2021/11/13 23:15:57 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	unsigned int	is_neg;
	unsigned int	res;

	is_neg = 1;
	i = 0;
	res = 0;
	while (((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ') && str[i])
		i++;
	if (str[i] == '-')
	{
		is_neg *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * is_neg);
}
