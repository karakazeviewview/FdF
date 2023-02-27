/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	ch;

	ch = (char)c;
	len = ft_strlen(s);
	if (!ch)
		return ((char *)&s[len]);
	while (len--)
	{
		if (s[len] == ch)
			return ((char *)&s[len]);
	}
	return (NULL);
}
