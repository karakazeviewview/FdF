#include "../include/libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (char)c;
	while (*s || (!*s && !ch))
	{
		if (*s == ch)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
