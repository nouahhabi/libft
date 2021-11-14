/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:41:17 by nouahhab          #+#    #+#             */
/*   Updated: 2021/11/13 16:38:36 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove( void * dest, const void * src, size_t size )
{
    size_t  i;

    if (dest == src)
        return (dest);
    if (dest > src)
    {
        i = size;
        while (i--)
            *(char*)(dest + i) = *(char*)(src + i);
    }
    else
    {
        i = 0;
        while (i < size)
        {
            *(char*)(dest + i) = *(char*)(src + i);
            i++;
        }
    }
    return (dest);
}