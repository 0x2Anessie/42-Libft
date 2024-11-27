/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acatusse <acatusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:00:26 by acatusse          #+#    #+#             */
/*   Updated: 2022/12/06 14:57:57 by acatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Rempli une string de 0 sur les n premiers caracteres */

#include "libft.h"

void	ft_bzero(void *s, size_t size)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (size != '\0')
	{
		*str = '\0';
		str++;
		size--;
	}
}
