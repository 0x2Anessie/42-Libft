/* Trouve l'aiguille de size max len dans la botte de foin et la renvoie */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	len_needle;

	if ((!haystack || !needle) && n == 0)
		return (NULL);
	if (*needle == 0 || haystack == needle)
		return ((char *)haystack);
	len_needle = ft_strlen(needle);
	while (*haystack && len_needle <= n--)
	{
		if (!(ft_strncmp((char *)haystack, (char *)needle, len_needle)))
			return ((char *)haystack);
	haystack++;
	}
	return (NULL);
}
