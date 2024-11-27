/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acatusse <acatusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:17:07 by acatusse          #+#    #+#             */
/*   Updated: 2022/12/07 16:39:07 by acatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Calcule la taille d'une string */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (i);
	i = 0;
	while (s[i])
		i++;
	return (i);
}
