/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 00:47:27 by nouahhab          #+#    #+#             */
/*   Updated: 2021/11/14 00:48:25 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	find_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] == set[j] && s1[i] && set[i])
	{
		i++;
		j++;
	}
	return (i);
}

static size_t	find_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(s1) - 1;
	j = ft_strlen(set) - 1;
	while (s1[i] == set[j])
	{
		i--;
		j--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*p;
	
	if (!s1)
		return (0);
	else if (!set)
		return ((char *)s1);
	p = malloc((ft_strlen(s1) - (2 * ft_strlen(set)) + 1) * sizeof(char));
	if (!p)
		return (0);
	j = 0;
	i = find_start(s1, set);
	while (i <= find_end(s1, set))
	{
		p[j] = s1[i];
		i++;
		j++;
	}
	p[j] = '\0';
	return (p);
}
