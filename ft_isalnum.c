/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:35:59 by nouahhab          #+#    #+#             */
/*   Updated: 2021/12/04 22:58:27 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

//#include<stdio.h>
//int main()
//{
//	int c1= 'a';
//	int c3= '9';
//	int c4= '&';

//	printf("%d", ft_isalnum(c4));

//}