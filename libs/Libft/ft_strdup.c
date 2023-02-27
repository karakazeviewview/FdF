#include "../include/libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret;
	size_t	len;

	len = ft_strlen(s1);
	ret = (char *)malloc(len + 1);
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, s1, len + 1);
	return (ret);
}
