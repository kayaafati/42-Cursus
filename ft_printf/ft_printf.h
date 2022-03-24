/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:46:36 by fkaya             #+#    #+#             */
/*   Updated: 2022/03/15 13:49:14 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"
# include <unistd.h>

int	ft_say_bas(unsigned int c);
int	arr_print(char *str);
int	ft_uint(unsigned int x);
int	ft_strcheck(va_list arg, int x);
int	ft_printf(const char *str, ...);
int	ft_putcharr(char c);
int	hexadec(unsigned int x, char c);
int	index_print(unsigned long x);
int	address_print(unsigned long x);

#endif
