#include "fdf.h"

void	get_color_code(t_data *d, t_matrix *mx, int i, int j)
{
	bool	ok;

	ok = false;
	if (mx->coord_infocnt == 1)
		mx->color[i][j] = -1;
	if (mx->coord_infocnt == 2)
		mx->color[i][j] = ft_atoi_base(mx->coord_info[1], 16, &ok);
	if (mx->coord_infocnt != 1 && \
		(!ok || mx->color[i][j] < 0x0 || mx->color[i][j] > 0xffffff))
		fdf_exit(d, "Invalid color code.");
}
