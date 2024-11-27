/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acatusse <acatusse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:05:17 by acatusse          #+#    #+#             */
/*   Updated: 2022/12/05 18:09:06 by acatusse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ecrit le caractere c sur le descripteur de fichier fd */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write (fd, &c, 1);
}
