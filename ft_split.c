/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahhab <nouahhab@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 22:18:39 by nouahhab          #+#    #+#             */
/*   Updated: 2021/12/05 23:32:31 by nouahhab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	count;
	int	i;
	int	flag;

	count = 0;
	i = 0;
	flag = 1;
	while (str[i])
	{
		if (flag == 1 && str[i] != c)
		{
			count++;
			flag = 0;
		}
		else if (flag == 0 && str[i] == c)
			flag = 1;
		i++;
	}
	return (count);
}

static char	*ft_get_next_word(const char *str, char c, int *index)
{
	char	*word;
	int		word_len;
	int		i;
	int		word_end;

	word_len = 0;
	i = 0;
	while (str[*index] == c)
		(*index)++;
	while (str[*index + word_len] != c && str[*index + word_len])
		word_len++;
	word = (char *) malloc((word_len + 1) * sizeof(char));
	if (!word)
		return (0);
	word_end = *index + word_len;
	while (*index < word_end)
	{
		word[i++] = str[(*index)++];
	}
	word[i] = 0;
	return (word);
}

static void	ft_free_all(char **output, int current_word)
{
	int	i;

	i = 0;
	while (i < current_word)
		free(output[i++]);
	free(output);
}

char	**ft_split(char const *str, char c)
{
	char	**output;
	int		i;
	int		j;

	if (!str)
		return (0);
	output = (char **)malloc((count_words(str, c) + 1) * sizeof(char *));
	if (!output)
		return (0);
	i = 0;
	j = 0;
	while (i < count_words(str, c))
	{
		output[i++] = ft_get_next_word(str, c, &j);
		if (!output[i - 1])
		{
			ft_free_all(output, i);
			return (0);
		}
	}
	output[i] = 0;
	return (output);
}

//int main()
//{
//	char *str = ft_strdup("salam|hello|bonjour|hola");

//	char **tab = ft_split(str, '|');

//	int i = 0;
//	while (tab[i]) {
//		printf("%s\n", tab[i]);
//		i++;
//	}

//	i = 0;
//	while (tab[i]) {
//		free(tab[i]);
//		i++;
//	}
//	free(tab);
//}