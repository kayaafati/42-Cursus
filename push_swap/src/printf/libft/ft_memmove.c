/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:40:29 by fkaya             #+#    #+#             */
/*   Updated: 2022/02/23 17:17:36 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int	i;

	i = 0;
	if ((char *)dst < (char *)src)
	{
		while (n--)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	else if ((char *)src < (char *)dst)
	{
		i = n;
		i--;
		while (n--)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i--;
		}
	}
	return (dst);
}
/*
int	main()
{
	char dest[50] = "fatihcil";
	printf("%s",ft_memmove(dest + 2,dest ,4));
	//printf("%s",ft_memmove(dest + 1, dest + 3, 4));
}*/
//kopyalama yapar, bufferlarda çakışma olmaması için tersten kopyalama yapar
