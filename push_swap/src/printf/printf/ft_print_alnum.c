/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alnum.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:55:38 by fkaya             #+#    #+#             */
/*   Updated: 2022/12/19 16:59:15 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char const *s)
{
	if (!s)
		return (ft_putstr("(null)"));
	return (write(1, s, ft_strlen(s)));
}

int	ft_putnbr(int n)
{
	char	*yaz;
	int		ret;

	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	else if (n == 0)
		return (ft_putchar('0'));
	yaz = ft_itoa(n);
	ret = ft_putstr(yaz);
	free(yaz);
	return (ret);
}
