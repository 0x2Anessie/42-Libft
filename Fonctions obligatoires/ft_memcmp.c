/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nessie <nessie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 17:24:14 by nessie            #+#    #+#             */
/*   Updated: 2023/05/02 16:33:10 by nessie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*string_1;
	unsigned char	*string_2;

	string_1 = (unsigned char *)s1;
	string_2 = (unsigned char *)s2;
	if (string_1 == string_2 || n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		if (*string_1 != *string_2)
			return (*string_1 - *string_2);
		string_1++;
		string_2++;
		i++;
	}
	return (0);
}