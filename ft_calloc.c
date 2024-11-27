/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acatusse <acatusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:02:14 by acatusse          #+#    #+#             */
/*   Updated: 2022/12/07 15:37:00 by acatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* rempli une zone memoire avec des 0, count nombre de 0, size taille du
tableau */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*allowed_mem;
	size_t	total_size;

	allowed_mem = NULL;
	if (size && nmemb * size / size != nmemb)
		return (NULL);
	total_size = nmemb * size;
	allowed_mem = malloc(total_size);
	if (!allowed_mem)
		return (NULL);
	if (allowed_mem)
		ft_bzero(allowed_mem, total_size);
	return (allowed_mem);
}
