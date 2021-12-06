/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 01:48:13 by nouahhab          #+#    #+#             */
/*   Updated: 2021/12/05 23:59:33 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

//void func(unsigned int i, char *c) {
//	*c += 1;
//}

//int main () {
//	char *str = ft_strdup("abcdef");
//	ft_striteri(str, &func);
//	ft_putstr_fd(str, 1);
//	free(str);
//}