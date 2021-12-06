/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 23:54:04 by nouahhab          #+#    #+#             */
/*   Updated: 2021/12/06 04:36:35 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*p;

	i = 0;
	if (!s)
		return (0);
	p = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!p)
		return (0);
	while (s[i])
	{
		p[i] = (*f)(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}

//char uppercase(unsigned int i, char c)
//{
//	if (c <= 122 && c >= 97)
//		return (c - 32);
//	return c;
//}

//int main()
//{
//	char *s=ft_strdup("bhdbhl&&&jlb156549");
//	char *p=ft_strmapi(s, &uppercase);

//	ft_putendl_fd(p,1);
//}