/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:46:18 by nouahhab          #+#    #+#             */
/*   Updated: 2021/11/13 17:58:04 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr( const char * str, int c)
{
    int i;
    char *s;

    s = (char *) str;
    i = 0;
    while (str[i])
        i++;
    while (i >= 0)
    {
        if (str[i] == c)
            return ((char*)s + i);
        i--;
    }
    return (NULL);
}