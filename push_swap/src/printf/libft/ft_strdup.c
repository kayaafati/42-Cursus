/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:53:59 by fkaya             #+#    #+#             */
/*   Updated: 2022/02/23 17:38:55 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	size_t	x;
	size_t	i;

	i = 0;
	x = ft_strlen(s1);
	s = (char *) malloc(sizeof(char) * (x + 1));
	if (!s)
		return (0);
	else
	{
		while (s1[i] != '\0')
		{
			s[i] = s1[i];
			i++;
		}
	}
	s[i] = '\0';
	return (s);
}
/*
int	main()
{
	char	yn[] = "fatimetemp";
	printf("%s",ft_strdup(y));
}*/
// s1'i klonlar ve return olarak yeni bir pointer dondurur.
