/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acatusse <acatusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:54:45 by acatusse          #+#    #+#             */
/*   Updated: 2022/12/07 16:16:29 by acatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Trouve la derniere occurence du caractere C dans la string S et renvoir un
pointeur dessus */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = s;
	while (*s)
		s++;
	while (s >= str)
		if (*s-- == (char)c)
			return ((char *)s + 1);
	return (NULL);
}
