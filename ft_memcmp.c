/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:39:30 by nouahhab          #+#    #+#             */
/*   Updated: 2021/11/12 23:46:14 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t size)
{
    size_t  i;

    i = 0;
    while (i < size)
    {
        if (((unsigned char*)s1)[i] != ((unsigned char*)s2)[i])
            return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
        i++;
    }
    return (0);
}