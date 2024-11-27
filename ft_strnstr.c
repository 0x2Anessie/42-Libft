/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acatusse <acatusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:11:51 by acatusse          #+#    #+#             */
/*   Updated: 2022/12/07 16:16:23 by acatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Trouve l'aiguille de size max len dans la botte de foin et la renvoie */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	len_needle;

	if ((!haystack || !needle) && n == 0)
		return (NULL);
	if (*needle == 0 || haystack == needle)
		return ((char *)haystack);
	len_needle = ft_strlen(needle);
	while (*haystack && len_needle <= n--)
	{
		if (!(ft_strncmp((char *)haystack, (char *)needle, len_needle)))
			return ((char *)haystack);
	haystack++;
	}
	return (NULL);
}
