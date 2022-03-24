/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:19:16 by fkaya             #+#    #+#             */
/*   Updated: 2022/02/23 16:23:23 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memchr( const void *s, int c, size_t n)
{
	unsigned char	*tmp;
	size_t			i;
	unsigned char	x;

	if (!s && !n)
		return (0);
	tmp = (unsigned char *)s;
	i = 0;
	x = (unsigned char )c;
	while (i < n)
	{
		if (tmp[i] == x)
			return ((void *)(tmp + i));
		i++;
	}
	return (0);
}
/*
int	main()
{
	char cp[] = "bilgisayar";
	char cd = 'g';
	printf("%c karakterin bellek adresi %p\n", cd, ft_memchr(cp, cd, 2));
	printf("%c karakterin bellek adresi %p\n", cd, memchr(cp, cd, 2));
	return 0;
}*/
//n'e kadar karakterde gönderilen ikinci diziyi ilk dizi içinde arıyor.
