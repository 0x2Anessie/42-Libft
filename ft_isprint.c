/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acatusse <acatusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:15:23 by acatusse          #+#    #+#             */
/*   Updated: 2022/12/05 21:14:10 by acatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Renvoie 1 i le caractere est printable */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}
