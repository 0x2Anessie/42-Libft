/* copie le contenu de la zone mem src dans la zone mem dest */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;

	if (!dest && !src)
		return (dest);
	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	while (n > 0)
	{
		*destination = *source;
		destination++;
		source++;
		n--;
	}
	return (dest);
}
