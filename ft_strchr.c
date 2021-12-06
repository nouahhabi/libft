/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:44:20 by nouahhab          #+#    #+#             */
/*   Updated: 2021/12/06 04:38:23 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i++;
	}
	if (c == '\0')
		return ((char *)(str + i));
	return (NULL);
}
//#include <stdio.h>
// int main()
// {
//	 char *s = ft_strdup("kdgkl");
//	 char *p = ft_strchr(s, 'g');

//	 printf("%s\n", p);
//	 free(s);
// }