/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:39:13 by nouahhab          #+#    #+#             */
/*   Updated: 2021/12/05 00:27:19 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memory_block, int searched_char, size_t size)
{
	size_t	i;
	char	*p;

	i = 0;
	p = (char *)memory_block;
	while (i < size)
	{
		if (p[i] == (char)searched_char)
			return (&p[i]);
		i++;
	}
	return (NULL);
}

//#include<stdio.h>
//int main()
//{
//	const char *str = "schiuch";

//	char *p = ft_memchr(str, 'i', 8);
//	printf("%s",p);
//}