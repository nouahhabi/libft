/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:40:56 by nouahhab          #+#    #+#             */
/*   Updated: 2021/11/13 16:41:33 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy( void * dest, const void * src, size_t size )
{
    size_t  i;

    i = 0;
    if (!dest && !src)
		return (0);
    while (i < size)
    {
        *(char*)(dest + i) = *(char*)(src + i);
        i++;
    }
    return (dest);
}