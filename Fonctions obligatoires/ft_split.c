/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nessie <nessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:29:24 by nessie	           #+#    #+#             */
/*   Updated: 2023/05/02 16:32:53 by nessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
		while (s[i] && s[i] == c)
			i++;
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		current_word;
	int		i;
	int		start;

	i = 0;
	start = 0;
	current_word = 0;
	strings = malloc(sizeof(char *) * (nb_words(s, c) + 1));
	if (!strings)
		return (NULL);
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			strings[current_word++] = ft_substr(s, start, i - start);
		}
		while (s[i] && s[i] == c)
			i++;
	}
	strings[current_word] = NULL;
	return (strings);
}