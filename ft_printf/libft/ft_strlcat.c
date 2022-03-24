/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:20:00 by fkaya             #+#    #+#             */
/*   Updated: 2022/02/23 17:31:59 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	total;
	size_t	original;

	original = n;
	total = ft_strlen(dst) + ft_strlen(src);
	while (*dst != 0 && n > 0)
	{
		dst++;
		n--;
	}
	if (n == 0)
	{
		return (ft_strlen(src) + original);
	}
	while (*src != 0 && n > 1)
	{
		*dst++ = *src++;
		n--;
	}
	*dst = 0;
	return (total);
}
/*
int main(void)
{
	char yasintemp[55] = "yasintemp";
	char metetemp[50] = "mete";
	printf("%lu\n", ft_strlcat(yasintemp, metetemp, 5));
}*/
//deste src yi ekler, return olarak, dest ve src uzunlugu toplanip dondurulur.
