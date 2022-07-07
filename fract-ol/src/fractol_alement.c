/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_alement.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 03:22:48 by fkaya             #+#    #+#             */
/*   Updated: 2022/07/07 11:10:39 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/fractol.h"

void	fractol_element2(t_element *ptr, char *str)
{
	ptr->fractal_func = julia;
	if (!ft_strncmp("julia2", str, 6))
	{
		ptr->offsetx = -0.4;
		ptr->offsety = 0.6;
	}
	else if (!ft_strncmp("julia3", str, 6))
	{
		ptr->offsetx = 0.285;
		ptr->offsety = 0.01;
	}
	else if (!ft_strncmp("mandelbar", str, 9))
	ptr->fractal_func = mandelbar;
}

t_element	*fractol_element(char *ptr)
{
	t_element	*imza;

	imza = malloc(sizeof(t_element));
	imza->x_max = 2;
	imza->x_min = -2;
	imza->y_max = 2;
	imza->y_min = -2;
	if (!ft_strncmp("mandelbrot", ptr, 10))
		imza->fractal_func = mandelbrot;
	else if (!ft_strncmp("julia1", ptr, 6))
	{
		imza->fractal_func = julia;
		imza->offsetx = -0.835;
		imza->offsety = -0.232;
	}
	else if (!ft_strncmp("burningship", ptr, 11))
		imza->fractal_func = burningship;
	else
		fractol_element2(imza, ptr);
	return (imza);
}
