/* Renvoie un pointeur sur la string S a partir de la premiere occurence du 
caractere C */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		else
			s++;
	}
	if (!c)
		return ((char *)s);
	return (NULL);
}
