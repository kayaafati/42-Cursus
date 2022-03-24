/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:20:19 by fkaya             #+#    #+#             */
/*   Updated: 2022/02/23 17:33:48 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	x;
	size_t	n_len;
	char	*h;

	i = 0;
	h = (char *)haystack;
	n_len = ft_strlen(needle);
	if (n_len == 0 || haystack == needle)
		return (h);
	while (h[i] != '\0' && i < len)
	{
		x = 0;
		while (h[i + x] != '\0' && needle[x] != '\0'
			&& h[i + x] == needle[x] && i + x < len)
			x++;
		if (x == n_len)
			return (h + i);
		i++;
	}
	return (0);
}
/*
#include <string.h>
int	main()
{
	char	yasin[] = "taha haksal";
	char	yasin2[] =  "ha ha";
	printf("%s\n", ft_strnstr(yasin,yasin2,8));
	printf("%s", strnstr(yasin,yasin2,8));
}*/
// s2 yi s1 de arar ve buldugunda devamini return eder. 
// ornek "ali top at" , "top" return olarak "top at".
