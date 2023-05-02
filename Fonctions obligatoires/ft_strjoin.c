/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nessie <nessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:26:30 by nessie	           #+#    #+#             */
/*   Updated: 2023/05/02 16:32:42 by nessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*s3;
	unsigned int	lens1;

	i = 0;
	j = 0;
	lens1 = ft_strlen(s1);
	s3 = malloc(sizeof (char) * (lens1 + ft_strlen(s2) + 1));
	if (!s1 || !s2)
		return (NULL);
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s3[lens1] = s2[j];
		lens1++;
		j++;
		i++;
	}
	s3[i] = '\0';
	return (s3);
}