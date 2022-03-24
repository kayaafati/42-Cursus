/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:19:34 by fkaya             #+#    #+#             */
/*   Updated: 2022/02/23 17:16:55 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			z;

	a = (unsigned char *)ptr1;
	b = (unsigned char *)ptr2;
	z = 0;
	while (z < n)
	{
		if (a[z] != b[z])
			return (a[z] - b[z]);
		z++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main( void )
{
    const char *cp1 = "Bilgisayar";
    const char *cp2 = "Bilgizleri";
    int ret;
    ret = ft_memcmp(cp1, cp2, 10);
    if(ret<0) printf("cp1 bellek içeriği cp2 bellek içeriğinden küçüktür!");
    else if(ret>0) printf("cp2 bellek içeriği cp1 bellek içeriğinden küçüktür!");
    else printf("cp1 bellek içeriği cp2 bellek içeriğine eşittir!");
    return 0;
}*/
//cp1'den n kadarını cp2'deki ifadeyle karşılaştırır
