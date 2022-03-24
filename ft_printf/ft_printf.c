/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:50:32 by fkaya             #+#    #+#             */
/*   Updated: 2022/03/17 14:02:19 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_say_bas(unsigned int c)
{
	int	i;

	i = 0;
	while (c >= 10)
	{
		c = c / 10;
		i++;
	}
	return (i + 1);
}

int	arr_print(char *str)
{
	int	len;

	len = 0;
	if (!str)
		return (arr_print("(null)"));
	while (str[len])
		len += ft_putcharr(str[len]);
	return (len);
}

int	ft_uint(unsigned int a)
{
	int		len;
	char	*str;

	len = ft_say_bas(a);
	str = (char *)malloc(sizeof(char) * len + 1);
	str[len] = '\0';
	while (len > 0)
	{
		str[len - 1] = a % 10 + 48;
		a = a / 10;
		len--;
	}
	len = arr_print(str);
	free(str);
	return (len);
}

int	ft_strcheck(va_list arg, int g)
{
	char	*a;
	int		len;

	len = 0;
	if (g == 'c')
		len += ft_putcharr(va_arg(arg, int));
	if (g == 's')
		len += arr_print(va_arg(arg, char *));
	if (g == 'p')
		len += address_print(va_arg(arg, unsigned long));
	if (g == 'd' || g == 'i')
	{
		a = ft_itoa(va_arg(arg, int));
		len += arr_print(a);
		free(a);
	}
	if (g == 'u')
		len += ft_uint(va_arg(arg, unsigned int));
	if (g == 'x' || g == 'X')
		len += hexadec(va_arg(arg, unsigned int), g);
	if (g == '%')
		len += ft_putcharr('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		len;
	int		i;

	va_start(arg, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			len += ft_strcheck(arg, str[i]);
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			len++;
		}
		i++;
	}
	va_end(arg);
	return (len);
}
