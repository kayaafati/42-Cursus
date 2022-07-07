/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 03:23:00 by fkaya             #+#    #+#             */
/*   Updated: 2022/07/07 16:32:49 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fractol.h"

void	set_fractal_x(t_frctl *ptr, double x_min, double x_max)
{
	ptr->f->x_max = x_max;
	ptr->f->x_min = x_min;
}

void	set_fractal_y(t_frctl *ptr, double y_min, double y_max)
{
	ptr->f->y_max = y_max;
	ptr->f->y_min = y_min;
}
//123-sol 124-sağ 125-yukarı 126-aşağı

int	keyhandler(int keycode, t_frctl *frc)
{
	if (keycode == 8)
		t_palet(frc->f);
	else if (keycode == 53)
		close_exit(frc);
	else if (keycode == 123)
		set_fractal_x(frc, frc->f->x_min - 0.05, frc->f->x_max - 0.05);
	else if (keycode == 124)
		set_fractal_x(frc, frc->f->x_min + 0.05, frc->f->x_max + 0.05);
	else if (keycode == 125)
		set_fractal_y(frc, frc->f->y_min + 0.05, frc->f->y_max + 0.05);
	else if (keycode == 126)
		set_fractal_y(frc, frc->f->y_min - 0.05, frc->f->y_max - 0.05);
	frc->is_put = 1;
	return (0);
}

int	mouse_handler(int keycode, int x, int y, t_frctl *frc)
{
	double	map_x;
	double	map_y;

	if (keycode == 5)
	{
		frc->is_put = 1;
		map_x = map(x, WIDTH, frc->f->x_min, frc->f->x_max);
		map_y = map(y, HEIGHT, frc->f->y_min, frc->f->y_max);
		frc->f->x_max = map_x + ((frc->f->x_max - map_x) / 1.3);
		frc->f->x_min = map_x + ((frc->f->x_min - map_x) / 1.3);
		frc->f->y_max = map_y + ((frc->f->y_max - map_y) / 1.3);
		frc->f->y_min = map_y + ((frc->f->y_min - map_y) / 1.3);
	}
	else if (keycode == 4)
	{
		frc->is_put = 1;
		map_x = map(x, WIDTH, frc->f->x_min, frc->f->x_max);
		map_y = map(y, HEIGHT, frc->f->y_min, frc->f->y_max);
		frc->f->x_min = map_x + ((frc->f->x_min - map_x) / 0.7);
		frc->f->x_max = map_x + ((frc->f->x_max - map_x) / 0.7);
		frc->f->y_min = map_y + ((frc->f->y_min - map_y) / 0.7);
		frc->f->y_max = map_y + ((frc->f->y_max - map_y) / 0.7);
	}
	return (0);
}
