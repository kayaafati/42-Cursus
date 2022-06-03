/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:35:25 by fkaya             #+#    #+#             */
/*   Updated: 2022/02/23 17:38:16 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*copy;

	if (s)
	{
		if (start >= ft_strlen(s) || len == 0 || ft_strlen(s) == 0)
			return (ft_strdup(""));
		i = 0;
		while (i < len && s[i + start] != '\0')
			i++;
		copy = (char *) malloc((sizeof(char) * i) + 1);
		if (!(copy))
			return (NULL);
		j = 0;
		while (j < i)
		{
			copy[j] = s[start + j];
			j++;
		}
		copy[j] = '\0';
		return (copy);
	}
	return (NULL);
}
/*
int	main()
{
	char	yasin[] = "yasintemp";
	printf("%s",ft_substr(yasin,3,4));
}*/
//start len arasi bir string olusturur, ve bu stringi return eder.
