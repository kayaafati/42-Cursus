/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:40:07 by fkaya             #+#    #+#             */
/*   Updated: 2022/02/23 17:41:17 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t x)
{
	ft_memset(s, '\0', x);
}

/*#include <stdio.h>
int	main()
{
	char dizi[] = "yasintemp";
	printf("%s",ft_bzero(dizi,5));
	//printf("%s",bzero(dizi,5));
}*/
// istenen sayıda karakteri null yapar
