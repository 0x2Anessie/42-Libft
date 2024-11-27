/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acatusse <acatusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:44:15 by acatusse          #+#    #+#             */
/*   Updated: 2022/12/07 16:15:45 by acatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Renvoie un pointeur sur la string S a partir de la premiere occurence du 
caractere C */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		else
			s++;
	}
	if (!c)
		return ((char *)s);
	return (NULL);
}
