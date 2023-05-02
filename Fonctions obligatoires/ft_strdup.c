/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nessie <nessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:16:53 by nessie	           #+#    #+#             */
/*   Updated: 2023/05/02 16:32:46 by nessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len_s1;
	char	*s1_copy;

	len_s1 = 0;
	while (s1[len_s1])
		len_s1++;
	s1_copy = malloc(sizeof(char) * (len_s1 + 1));
	if (!s1_copy)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s1_copy[i] = s1[i];
		i++;
	}
	s1_copy[i] = '\0';
	return (s1_copy);
}