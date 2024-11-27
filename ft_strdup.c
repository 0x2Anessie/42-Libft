/* Renvoie un pointeur sur une copie de S1 obtenue avec malloc */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len_s1;
	char	*s1_copy;

	len_s1 = 0;
	while (s1[len_s1])
		len_s1++;
	s1_copy = malloc(sizeof(char) * (len_s1 + 1));
	if (!s1_copy)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s1_copy[i] = s1[i];
		i++;
	}
	s1_copy[i] = '\0';
	return (s1_copy);
}
