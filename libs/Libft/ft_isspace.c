#include "../include/libft.h"

int	ft_isspace(int c)
{
	return (c == ' ' || ('\t' <= c && c <= '\r'));
}
