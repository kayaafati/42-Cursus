/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:18:26 by fkaya             #+#    #+#             */
/*   Updated: 2022/02/26 20:00:21 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

static int	ft_isspace(char chr)
{
	if ((chr >= 9 && chr <= 13) || chr == ' ')
		return (1);
	return (0);
}

static int	ft_isaret(char c, int *index)
{
	int	isaret;

	isaret = 1;
	if (c == '-' || c == '+')
	{
		if (c == '-')
			isaret *= -1;
		*index += 1;
	}
	return (isaret);
}

int	ft_atoi(const char *str)
{
	unsigned long	val;
	int				i;
	int				x;

	i = 0;
	val = 0;
	if (*str == '\0')
		return (0);
	while (ft_isspace(str[i]))
		i++;
	x = ft_isaret(str[i], &i);
	while (str[i] >= '0' && str [i] <= '9')
	{
		val = (val * 10) + (str[i] - '0');
		i++;
	}
	if (val > LONG_MAX)
	{
		if (x == -1)
			return (0);
		return (-1);
	}
	return (val * x);
}
/*
int	main()
{
	char	y[] = " -21474836555111111111111";
	printf("%d\n",ft_atoi(y));
	printf("%d",atoi(y));
}*/
//stringi sayıya çevirir
