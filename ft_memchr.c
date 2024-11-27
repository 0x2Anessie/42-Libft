/* Cherche C dans N caracteres de la string S et renvoie un pointeur sur la
zone mem dans laquelle est stock la premiere occurence de C */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*string;

	string = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*string == (unsigned char)c)
			return (string);
		string++;
		i++;
	}
	return (NULL);
}
