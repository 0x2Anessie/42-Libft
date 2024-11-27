/* Ecrire dans une nouvelle string la partie de S entre start et len */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*new_s;

	i = 0;
	new_s = ft_calloc(len + 1, 1);
	if (!new_s)
		return (NULL);
	while (i < len && start < ft_strlen(s))
	{
		new_s[i] = s[start];
		start++;
		i++;
	}
	return (new_s);
}
