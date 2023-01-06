/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:01:37 by fkaya             #+#    #+#             */
/*   Updated: 2022/02/23 17:31:22 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
/*
void	ft_upper(unsigned int i, char *s)
{
	int	c;
	c = 0;
	i = 0;
	if (*s)
	{
		s[c] = s[c] - 32;
	}
}
int	main ()
{
	char yasintemp[] = "yasintemp";
	ft_striteri(yasintemp,ft_upper);
	printf("%s",yasintemp);
}
*/
//s stringindeki her karakterin adresine tek tek f fonksiyonu uygulanir.
