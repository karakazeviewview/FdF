#include "fdf.h"

static int	close_key(t_data *d)
{
	mlx_destroy_window(d->mlx->init, d->mlx->win);
	mlx_destroy_image(d->mlx->init, d->mlx->img);
	return (fdf_exit(d, NULL));
}

static int	on_keydown(int key, t_data *d)
{
	if (key == KEY_ESC)
		close_key(d);
	zoom_key(&d->cam, key);
	move_key(&d->cam, key);
	rotate_key(&d->cam, key);
	adjust_depth_key(&d->cam, key);
	projection_key(&d->cam, d->mx, key);
	rendering(d, d->mlx, d->mx);
	return (0);
}

void	key_hook(t_data *d, t_mlx *mlx)
{
	mlx_hook(mlx->win, 2, (1L << 0), on_keydown, d);
	mlx_hook(mlx->win, 17, (1L << 0), close_key, d);
}
