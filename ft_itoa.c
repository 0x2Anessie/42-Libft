/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acatusse <acatusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 17:38:41 by acatusse          #+#    #+#             */
/*   Updated: 2022/12/07 15:37:20 by acatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Converti un int en string en divisant par 10 pour trqiter digit by digit */

#include "libft.h"

static unsigned int	its_the_final_coutdown(int i)

{
	unsigned int	len;

	if (i <= 0)
		len = 1;
	else
		len = 0;
	while (i != 0)
	{
		len++;
		i /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	unsigned int	len;
	unsigned char	c;
	unsigned char	*str;

	len = its_the_final_coutdown(n);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	while (n != 0)
	{
		c = n % 10;
		if (n < 0)
			c = -c;
		str[--len] = (c + '0');
		n /= 10;
	}
	return ((char *)str);
}
