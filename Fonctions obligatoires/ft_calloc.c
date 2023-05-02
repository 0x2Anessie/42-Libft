/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nessie <nessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:02:14 by nessie            #+#    #+#             */
/*   Updated: 2023/05/02 16:33:27 by nessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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