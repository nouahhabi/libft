/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:35:40 by nouahhab          #+#    #+#             */
/*   Updated: 2021/12/04 22:45:09 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

//int main()
//{
//	char *str;
//	int i;
//	str=malloc(sizeof(char)*3);
//	ft_bzero(str,3);
//	i=3;
//	while (i)
//	{
//		ft_putnbr_fd(str[i], 1);
//		i--;
//	}
//	free(str);
//}
