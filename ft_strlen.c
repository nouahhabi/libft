/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:42:18 by nouahhab          #+#    #+#             */
/*   Updated: 2021/12/05 22:32:05 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen( const char *str )
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
