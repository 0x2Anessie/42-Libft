/* Copie  le contenu de la zone mem src dans la zone mem dest et renvoie un
pointeur sur la dst */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;

	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (!dest && !src)
		return (dest);
	if (destination > source)
		while (n--)
			destination[n] = source[n];
	else
		while (n--)
			*destination++ = *source++;
	return (dest);
}
