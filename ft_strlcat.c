/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:44:50 by nouahhab          #+#    #+#             */
/*   Updated: 2021/11/30 02:25:22 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_min(size_t a, size_t b)
{
	if (a > b)
		return (b);
	return (a);
}

size_t	ft_strlcat(const char *dest, const char *src, size_t size)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;
	size_t	output;
	char	*dst;

	dst = (char *)dest;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	output = len_src + (ft_min(size, len_dest));
	if (len_src == 0 || size == 0)
		return (output);
	i = 0;
	while (src[i] && len_dest + i < size - 1)
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	dst[len_dest + i] = '\0';
	return (output);
}
