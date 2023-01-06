/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:20:25 by fkaya             #+#    #+#             */
/*   Updated: 2022/02/23 17:37:11 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		x;
	char	*y;

	x = 0;
	y = 0;
	while (c > 255)
		c -= 256;
	while (s[x] != '\0')
	{
		if (s[x] == c)
			y = (char *)(s + x);
		x++;
	}
	if (s[x] == c)
		y = (char *)(s + x);
	return (y);
}
//son karşılaştığı c karakteri ve sonrasını alır
