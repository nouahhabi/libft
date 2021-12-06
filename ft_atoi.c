/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:35:27 by nouahhab          #+#    #+#             */
/*   Updated: 2021/12/04 22:45:47 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t			i;
	unsigned int	is_neg;
	unsigned int	res;

	is_neg = 1;
	i = 0;
	res = 0;
	while (((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ') && str[i])
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			is_neg *= -1;
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * is_neg);
}
//#include <stdio.h>
//int main()
//{
//	const char *str = "-126";
//	int n = 5;

//	n=ft_atoi(str);
//	printf("%d",n);
//}
