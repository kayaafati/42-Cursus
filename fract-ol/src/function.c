/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 03:22:56 by fkaya             #+#    #+#             */
/*   Updated: 2022/07/07 11:07:27 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fractol.h"

int	mandelbrot(t_frctl *ptr)
{
	int		n;
	double	x;
	double	y;
	double	x2;
	double	y2;

	n = 0;
	x = 0;
	y = 0;
	x2 = 0;
	y2 = 0;
	while (x2 + y2 <= 4 && n < MAXITER)
	{
		y = 2 * x * y + ptr->f->y;
		x = x2 - y2 + ptr->f->x;
		y2 = y * y;
		x2 = x * x;
		n++;
	}
	return (n);
}

int	burningship(t_frctl *ptr)
{
	int		n;
	double	x;
	double	y;
	double	x2;
	double	y2;

	n = 0;
	x = 0;
	y = 0;
	x2 = 0;
	y2 = 0;
	while (x2 + y2 <= 4 && n < MAXITER)
	{
		y = fabs(2 * x * y) + ptr->f->y;
		x = x2 - y2 + ptr->f->x;
		x2 = x * x;
		y2 = y * y;
		n++;
	}
	return (n);
}

int	mandelbar(t_frctl *ptr)
{
	int		n;
	double	x;
	double	y;
	double	x2;
	double	y2;

	n = 0;
	x = 0;
	y = 0;
	x2 = 0;
	y2 = 0;
	while (x2 + y2 <= 4 && n < MAXITER)
	{
		y = -2 * x * y + ptr->f->y;
		x = x2 - y2 + ptr->f->x;
		x2 = x * x;
		y2 = y * y;
		n++;
	}
	return (n);
}

int	julia(t_frctl *ptr)
{
	double	temp;
	double	cx;
	double	cy;
	int		n;

	cx = ptr->f->x;
	cy = ptr->f->y;
	n = 0;
	while (cx * cx + cy * cy <= 64 && n < MAXITER)
	{
		temp = cx * cx - cy * cy;
		cy = 2 * cx * cy + ptr->f->offsety;
		cx = temp + ptr->f->offsetx;
		n++;
	}
	return (n);
}
