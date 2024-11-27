/* Remplie une zone memoire S avec le caractere C, N fois et renvoie un pointeur
sur S */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	if (!s)
		return (NULL);
	str = s;
	i = 0;
	while (i < n)
	{
		*str = (char)c;
		str++;
		i++;
	}
	return (s);
}
