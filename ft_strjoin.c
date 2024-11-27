/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acatusse <acatusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:26:30 by acatusse          #+#    #+#             */
/*   Updated: 2022/12/07 16:15:59 by acatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Concatene deux strings dans une nouvelle string obtenue avec un malloc de la
taille des deux strings */

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
