/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:44:20 by nouahhab          #+#    #+#             */
/*   Updated: 2021/11/13 14:50:18 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr( const char * str, int c)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        if (str[i] == c)
            return ((char *)(str + i));
        i++;
    }
    if (c == '\0')
        return ((char *)(str + i));
    return (NULL);
}