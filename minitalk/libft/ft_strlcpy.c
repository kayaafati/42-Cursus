/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:40:31 by fkaya             #+#    #+#             */
/*   Updated: 2022/02/23 17:32:19 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcpy(char *restrict dst, const char *src, size_t n)
{
	size_t	x;

	x = 0;
	if (n > 0)
	{
		while (src [x] != '\0' && x < (n - 1))
		{
			dst[x] = src [x];
			x++;
		}
		dst[x] = 0;
	}
	while (src[x])
		x++;
	return (x);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char dizi1[30] = "yasintemp";
	char dizi2[50] = "mehmetyasin";
	ft_strlcpy(dizi1,dizi2,20);
	printf("%zu\n", ft_strlcpy(dizi1,dizi2,20));
}*/
// src den dst ye n kadar kopyalar src nin uzunluğu return edilir.
