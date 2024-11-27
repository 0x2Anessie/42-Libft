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
