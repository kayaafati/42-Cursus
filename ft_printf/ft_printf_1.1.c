/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_1.1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:50:32 by fkaya             #+#    #+#             */
/*   Updated: 2022/03/17 13:29:47 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putcharr(char c)
{
	write(1, &c, 1);
	return (1);
}

int	hexadec(unsigned int n, char c)
{
	int				i;
	int				i1;
	int				len;
	char			*a;
	unsigned int	n1;

	if (c == 'X')
		a = ft_strdup("0123456789ABCDEF");
	else
		a = ft_strdup("0123456789abcdef");
	i = 1;
	n1 = n;
	while (n1 >= 16 && i++)
		n1 = n1 / 16;
	len = i;
	while (--i >= 0)
	{
		n1 = n;
		i1 = i;
		while (--i1 >= 0)
			n1 = n1 / 16;
		ft_putcharr(a[n1 % 16]);
	}
	free(a);
	return (len);
}

int	index_print(unsigned long n)
{
	char	*a;

	a = ft_strdup("0123456789abcdef");
	if (n >= 16)
	{
		index_print(n / 16);
		index_print(n % 16);
	}
	else
		ft_putcharr(a[n]);
	free(a);
	return (0);
}

int	address_print(unsigned long n)
{
	int	i;

	i = 1;
	ft_putcharr('0');
	ft_putcharr('x');
	index_print(n);
	while (n >= 16)
	{
		n /= 16;
		i++;
	}
	return (i + 2);
}
