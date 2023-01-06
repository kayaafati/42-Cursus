/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:56:13 by fkaya             #+#    #+#             */
/*   Updated: 2022/12/19 16:59:27 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hexlen(unsigned long hex)
{
	int	i;

	i = 0;
	while (hex > 0)
	{
		hex /= 16;
		i++;
	}
	return (i);
}

int	ft_putptr(unsigned long hex, char *base)
{
	int		i;
	int		ret;
	char	*on6;

	ret = ft_putstr("0x");
	if (hex == 0)
		return (ret + ft_putchar('0'));
	i = hexlen(hex);
	on6 = malloc(i + 1);
	on6[i--] = 0;
	while (hex > 0)
	{
		on6[i--] = base[hex % 16];
		hex /= 16;
	}
	i = 0;
	while (on6[i])
		ret += ft_putchar(on6[i++]);
	free(on6);
	return (ret);
}

int	ft_puthex(unsigned int hex, char *base)
{
	int		i;
	int		ret;
	char	*on6;

	if (hex == 0)
		return (ft_putchar('0'));
	i = hexlen(hex);
	on6 = malloc(i + 1);
	on6[i--] = 0;
	while (hex > 0)
	{
		on6[i--] = base[hex % 16];
		hex /= 16;
	}
	ret = 0;
	i = 0;
	while (on6[i])
		ret += ft_putchar(on6[i++]);
	free(on6);
	return (ret);
}
