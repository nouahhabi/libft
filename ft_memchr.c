/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:39:13 by nouahhab          #+#    #+#             */
/*   Updated: 2021/11/13 16:39:02 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *memory_block, int searched_char, size_t size)
{
    size_t  i;
    char  *p;

    i = 0;
    p = (char*)memory_block;
    while (i < size)
    {
        if (p[i] == (char)searched_char)
            return (&p[i]);
        i++;
    }
    return (NULL);
}