/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:45:43 by nouahhab          #+#    #+#             */
/*   Updated: 2021/11/13 18:48:16 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void *ft_calloc(size_t element_count, size_t element_size)
{
   char	*p;
    p = malloc(element_size * element_count);
	if (!p)
		return (NULL);
	ft_memset(p, 0, element_count * element_size);
	return (p);
}