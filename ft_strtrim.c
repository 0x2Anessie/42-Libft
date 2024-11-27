/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acatusse <acatusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:53:17 by acatusse          #+#    #+#             */
/*   Updated: 2022/12/07 16:16:35 by acatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Trime le debut et le fin d'une string si ils correspondent au set, on
trouve le set avec is_in_set, si les premiers caracteres de la string
correspondent au set on commence apres, si les derniers carcteres de la string
correspondent au set on s'arrete avant */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}
