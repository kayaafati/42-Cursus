/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:06:20 by fkaya             #+#    #+#             */
/*   Updated: 2022/02/23 17:17:06 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dstc;
	const char	*srcc;

	if ((dst == src) || (n == 0))
		return (dst);
	if (!dst && !src)
		return (0);
	dstc = (char *)dst;
	srcc = (const char *)src;
	while (n--)
	{
		dstc[n] = srcc[n];
	}
	return (dst);
}
//kopyalama yapar
