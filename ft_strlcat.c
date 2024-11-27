/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acatusse <acatusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:33:13 by acatusse          #+#    #+#             */
/*   Updated: 2022/12/07 16:16:04 by acatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Concatene src a la suite de dst et renvoie la taille des deux string
concatenees */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	if (size == 0)
		return (len + ft_strlen(src));
	while (dst[len] && len < size)
		len++;
	i = len;
	while (i < size - 1 && src[i - len])
	{
		dst[i] = src[i - len];
		i++;
	}
	if (len < size)
		dst[i] = 0;
	return (len + ft_strlen(src));
}
