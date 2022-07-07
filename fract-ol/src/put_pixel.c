/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_pixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 03:23:11 by fkaya             #+#    #+#             */
/*   Updated: 2022/07/07 11:10:47 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fractol.h"

double	map(double value, double from_high, double min, double max)
{
	return (min + ((max - min) * (value / from_high)));
}

void	my_mlx_pixel_put(t_pixel *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

int	put_image_to_window(t_frctl *screen)
{
	int	x;
	int	y;
	int	n;

	x = 0;
	if (screen->is_put == 1)
	{
		screen->is_put = 0;
		while (x < WIDTH)
		{
			y = 0;
			while (y < HEIGHT)
			{
				screen->f->x = map(x, 1000, screen->f->x_min, screen->f->x_max);
				screen->f->y = map(y, 1000, screen->f->y_min, screen->f->y_max);
				n = screen->f->fractal_func(screen);
				my_mlx_pixel_put(screen->d, x, y, screen->f->coloring_func(n));
				y++;
			}
			x++;
		}
	}
	mlx_put_image_to_window(screen->mlx, screen->window, screen->d->img, 0, 0);
	return (0);
}
