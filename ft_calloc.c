/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:45:43 by nouahhab          #+#    #+#             */
/*   Updated: 2021/12/04 22:52:38 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t element_count, size_t element_size)
{
	char	*p;

	p = malloc(element_size * element_count);
	if (!p)
		return (NULL);
	ft_memset(p, 0, element_count * element_size);
	return (p);
}

//int main()
//{
//	size_t i;

//	char *str;

//	str=ft_calloc(3,sizeof(char));
//	i=3;
//	while (i)
//	{
//		ft_putnbr_fd(str[i], 1);
//		i--;
//	}
//	free (str);
//}