/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:57:30 by fkaya             #+#    #+#             */
/*   Updated: 2022/12/19 16:59:57 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>//denemek için

int	cozbunu(va_list eleman, char f)
{
	if (f == 'c')
		return (ft_putchar(va_arg(eleman, int)));
	else if (f == 's')
		return (ft_putstr(va_arg(eleman, char *)));
	else if (f == 'd' || f == 'i')
		return (ft_putnbr(va_arg(eleman, int)));
	else if (f == 'u')
		return (ft_putunbr(va_arg(eleman, unsigned int)));
	else if (f == 'p')
		return (ft_putptr(va_arg(eleman, unsigned long), "0123456789abcdef"));
	else if (f == 'x')
		return (ft_puthex(va_arg(eleman, unsigned int), "0123456789abcdef"));
	else if (f == 'X')
		return (ft_puthex(va_arg(eleman, unsigned int), "0123456789ABCDEF"));
	return (0);
}

int	ft_printf(const char *ref, ...)
{
	int		toplam;
	va_list	demirbas;

	toplam = 0;
	va_start(demirbas, ref);
	while (*ref)
	{
		if (*ref == '%')
		{
			ref++;
			if (*ref == '%')
				toplam += ft_putchar('%');
			else
				toplam += cozbunu(demirbas, *ref);
		}
		else
			toplam += ft_putchar(*ref);
		ref++;
	}
	va_end(demirbas);
	return (toplam);
}
/*
#include "limits.h"
int	main(void)
{
	ft_printf("ft_uzunluk : %d", ft_printf("%u\n", -12));
	printf("n_uzunluk :%d\n",printf("\n%u\n", -12));
	return (0);
}
*/
