/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nessie <nessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:23:30 by nessie	           #+#    #+#             */
/*   Updated: 2023/05/02 16:33:12 by nessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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