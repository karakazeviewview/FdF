#include "fdf.h"

int	ft_abs(long long a, long long b)
{
	long long	diff;

	diff = a - b;
	if (diff < INT_MIN || diff > INT_MAX)
		return (-1);
	if (diff < 0)
		return (-diff);
	return (diff);
}
