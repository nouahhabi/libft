/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 00:25:32 by nouahhab          #+#    #+#             */
/*   Updated: 2021/12/05 23:38:37 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*p;

	i = start;
	j = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len >= ft_strlen(s))
		len = ft_strlen(s);
	p = malloc((len + 1) * sizeof(char));
	if (!p)
		return (0);
	while (i < len + start && s[i])
		p[j++] = s[i++];
	p[j] = '\0';
	return (p);
}

//#include <stdio.h>
//int main()
//{
//	char *str = "tcbsfdvduh";
//	char *p= ft_substr (str, 2, 4);
//	printf("%s",p);
//}