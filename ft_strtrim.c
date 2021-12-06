/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 00:47:27 by nouahhab          #+#    #+#             */
/*   Updated: 2021/12/05 23:12:05 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i++] == c)
			return (1);
	}
	return (0);
}

static int	find_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (check(set, s1[i]))
			i++;
		else
			break ;
	}
	return (i);
}

static int	find_end(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (s1[i])
	{
		if (check(set, s1[i]))
			i--;
		else
			break ;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*p;

	if (!s1)
		return (0);
	if (!set)
		return ((char *)s1);
	i = find_start(s1, set);
	if (i >= (int)ft_strlen(s1))
		return (ft_strdup(""));
	k = find_end(s1, set);
	p = malloc((k - i + 2) * sizeof(char));
	if (!p)
		return (0);
	j = 0;
	while (i <= k)
		p[j++] = s1[i++];
	p[j] = '\0';
	return (p);
}
//#include<stdio.h>
//int main()
//{
//	char *s="aaaabonjour";
//	char *str="ar";
//	char *p=ft_strtrim(s,str);
//	printf("%s",p);
//}