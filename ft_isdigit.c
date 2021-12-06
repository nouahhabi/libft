/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:37:23 by nouahhab          #+#    #+#             */
/*   Updated: 2021/12/04 23:25:31 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

//#include<stdio.h>
//int main()
//{
//	int c1= 'a';
//	int c2= '9';
//	int c3= '&';

//	printf("%d", ft_isdigit(c1));
//	printf("%d", ft_isdigit(c2));
//	printf("%d\n", ft_isdigit(c3));

//}