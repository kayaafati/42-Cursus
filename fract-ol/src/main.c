/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 03:22:32 by fkaya             #+#    #+#             */
/*   Updated: 2022/07/07 12:41:00 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <math.h>
#include "../header/fractol.h"
#include <stdio.h>
#include <unistd.h>

int	check_args(char *ptr)
{
	if (!ft_strncmp(ptr, "mandelbar", 9) || !ft_strncmp(ptr, "mandelbrot", 10)
		|| !ft_strncmp(ptr, "julia1", 6) || !ft_strncmp(ptr, "julia2", 6)
		|| !ft_strncmp(ptr, "julia3", 6) || !ft_strncmp(ptr, "burningship", 11))
		return (1);
	return (0);
}

int	close_exit(t_frctl *vars)
{
	if (vars)
	{
		mlx_destroy_window(vars->mlx, vars->window);
		free(vars->f);
	}
	else
	{
		printf("\nWrong Login! -> ./fractol fractol_name\n");
		printf("----------------Fractals----------------\n");
		printf("mandelbrot\n");
		printf("mandelbar\n");
		printf("burningship\n");
		printf("julia1\n");
		printf("julia2\n");
		printf("julia3\n");
	}
	exit (0);
	return (1);
}

int	main(int ac, char **av)
{
	t_frctl		screen;
	t_pixel		dot;
	t_element	*koordinat;

	if (ac != 2 || !check_args(av[1]))
		close_exit(NULL);
	screen.mlx = mlx_init();
	screen.window = mlx_new_window(screen.mlx, HEIGHT, WIDTH, "YENİ DÜZEN");
	dot.img = mlx_new_image(screen.mlx, HEIGHT, WIDTH);
	dot.addr = mlx_get_data_addr(dot.img, &dot.bits_per_pixel,
			&dot.line_length, &dot.endian);
	screen.d = &dot;
	screen.is_put = 1;
	koordinat = fractol_element(av[1]);
	t_palet(koordinat);
	screen.f = koordinat;
	mlx_hook(screen.window, 2, 1L << 0, keyhandler, &screen);
	mlx_hook(screen.window, 17, 0, close_exit, &screen);
	mlx_mouse_hook(screen.window, mouse_handler, &screen);
	mlx_loop_hook(screen.mlx, put_image_to_window, &screen);
	mlx_loop(screen.mlx);
}
