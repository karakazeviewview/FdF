#include "fdf.h"

int	main(int argc, char *argv[])
{
	t_data		*d;

	d = alloc_s_data();
	init_s_matrix(d->mx);
	check_argc(d, argc);
	get_matrix(d, argv[1]);
	init_s_camera(&d->cam, d->mx);
	init_s_mlx(d, d->mlx);
	rendering(d, d->mlx, d->mx);
	key_hook(d, d->mlx);
	mlx_loop(d->mlx->init);
	fdf_exit(d, NULL);
}

//__attribute__((destructor)) static void destructor()
//{
//	system("leaks -q fdf");
//}
