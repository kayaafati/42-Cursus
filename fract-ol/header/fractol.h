/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 11:28:53 by fkaya             #+#    #+#             */
/*   Updated: 2022/07/07 16:15:33 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H
# define HEIGHT 1000
# define WIDTH 1000
# define MAXITER 100
# include "../minilibx/mlx.h"
# include <stdlib.h>
# include <string.h>
# include <math.h>

typedef struct s_frctl	t_frctl;

typedef struct s_pixel
{
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}	t_pixel;

typedef struct s_element
{
	double	x_min;
	double	x_max;
	double	y_min;
	double	y_max;
	double	x;
	double	y;
	double	offsetx;
	double	offsety;
	int		(*fractal_func)(struct s_frctl *);
	int		(*coloring_func)(int);
}	t_element;

typedef struct s_frctl
{
	void			*mlx;
	void			*window;
	int				is_put;
	t_pixel			*d;
	t_element		*f;

}	t_frctl;

t_element	*fractol_element(char *ptr);
void		fractol_element2(t_element *ptr, char *str);
void		my_mlx_pixel_put(t_pixel *data, int x, int y, int color);
int			put_image_to_window(t_frctl *screen);
int			julia(t_frctl *ptr);
int			mandelbar(t_frctl *ptr);
int			mandelbrot(t_frctl *ptr);
int			burningship(t_frctl *ptr);
int			ft_strlen(char *ptr);
int			close_exit(t_frctl *vars);
int			check_args(char *ptr);
int			mouse_handler(int keycode, int x, int y, t_frctl *frc);
int			keyhandler(int keycode, t_frctl *frc);
void		set_fractal_y(t_frctl *ptr, double y_min, double y_max);
void		set_fractal_x(t_frctl *ptr, double x_min, double x_max);
int			ft_strncmp(const char *s1, const char *s2, unsigned int n);
double		map(double value, double from_high, double min, double max);
int			get_trgb(int t, int r, int g, int b);
void		t_palet(t_element *new);
int			color3(int n);
int			color2(int n);
int			color1(int n);
#endif
