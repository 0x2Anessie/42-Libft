/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acatusse <acatusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:14:19 by acatusse          #+#    #+#             */
/*   Updated: 2022/12/06 12:55:06 by acatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Renvoie 1 si le caractere est un chiffre*/

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
