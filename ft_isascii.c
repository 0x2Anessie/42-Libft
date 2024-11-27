/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acatusse <acatusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:12:12 by acatusse          #+#    #+#             */
/*   Updated: 2022/12/05 18:48:37 by acatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Renvoie 1 si le caractere est dans la table ascii */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
