/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acatusse <acatusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:23:30 by acatusse          #+#    #+#             */
/*   Updated: 2022/12/07 15:37:31 by acatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Cherche C dans N caracteres de la string S et renvoie un pointeur sur la
zone mem dans laquelle est stock la premiere occurence de C */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*string;

	string = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*string == (unsigned char)c)
			return (string);
		string++;
		i++;
	}
	return (NULL);
}
