/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 22:44:24 by nouahhab          #+#    #+#             */
/*   Updated: 2021/11/13 22:45:22 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strdup(const char *s1)
{
    int     i;
    char    *p;
 
    i = 0;
    p = malloc((ft_strlen(s1) + 1) * sizeof(char));
    if (!p)
        return (NULL);
    while (s1[i])
     {
        p[i] = s1[i];
        i++;
    }
    p[i] = '\0';
    return (p);
}