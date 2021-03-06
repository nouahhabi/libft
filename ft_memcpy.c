/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:40:56 by nouahhab          #+#    #+#             */
/*   Updated: 2021/12/05 00:27:27 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy( void *dest, const void *src, size_t size )
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (i < size)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}

	//#include<stdio.h>
	//int main()
	//{
	//	 char *str = ft_strdup("    test");
	//	 const char *s = ft_strdup("fhgf");

	//	char *p =ft_memcpy(str, s, 3);
	//	printf("%s",p);
	//	free(str);
	//	free((char *)s);
	//}