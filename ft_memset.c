/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:19:01 by nouahhab          #+#    #+#             */
/*   Updated: 2021/12/05 01:12:32 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *p, int value, size_t n)
{
	size_t			i;
	unsigned char	*r;

	r = (unsigned char *)p;
	i = 0;
	while (i < n)
		r[i++] = value;
	return (p);
}
//#include <stdio.h>
//int main () {
//    int i = 0;
//    char str[50] = "Hada string";
//    ft_memset(str,'$',7);
//    while (str[i])
//    {
//        printf("%c",str[i]);
//        i++;
//    }
//    return(0);
//}