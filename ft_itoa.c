/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 01:50:54 by nouahhab          #+#    #+#             */
/*   Updated: 2021/12/04 23:33:39 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill(char *p, int j, unsigned int x, int is_neg)
{
	int	i;

	i = j;
	p[i] = '\0';
	i--;
	while (i > 0)
	{
		p[i] = x % 10 + '0';
		x = x / 10;
		i--;
	}
	if (is_neg)
		p[i] = '-';
	else
		p[i] = x % 10 + '0';
	return (p);
}

static int	nbr(unsigned int x)
{
	int	i;

	i = 0;
	while (x)
	{
		x = x / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*p;
	int				is_neg;
	unsigned int	x;

	is_neg = 0;
	if (n < 0)
	{
		x = -n;
		is_neg = 1;
	}
	else if (n > 0)
		x = n;
	else
		return (ft_strdup("0"));
	p = malloc((nbr(x) + is_neg + 1) * sizeof(char));
	if (!p)
		return (0);
	return (fill(p, nbr(x) + is_neg, x, is_neg));
}
//#include <stdio.h>
//int main()
//{
//	int n = 126;
//	char *p;

//	printf("%s",ft_itoa(n));
//}
