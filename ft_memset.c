/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acatusse <acatusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:18:45 by acatusse          #+#    #+#             */
/*   Updated: 2022/12/07 15:40:01 by acatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Remplie une zone memoire S avec le caractere C, N fois et renvoie un pointeur
sur S */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	if (!s)
		return (NULL);
	str = s;
	i = 0;
	while (i < n)
	{
		*str = (char)c;
		str++;
		i++;
	}
	return (s);
}
