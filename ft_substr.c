/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 00:25:32 by nouahhab          #+#    #+#             */
/*   Updated: 2021/11/14 00:25:52 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;

	i = start;
	j = 0;
	if (!s)
		return (0);
	p = malloc((len + 1) * sizeof(char));
	if (!p)
		return (0);
	if (start >= ft_strlen(s))
	{
		p[j] = '\0';
		return (p);
	}
	while (i < len + start && s[i])
	{
		p[j] = s[i];
		i++;
		j++;
	}
	p[j] = '\0';
	return (p);
}
