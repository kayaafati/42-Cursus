/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:20:08 by fkaya             #+#    #+#             */
/*   Updated: 2022/02/23 17:33:16 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((s1[i] == s2[i] && (i < n -1) && (s1[i] != '\0' && s2[i] != '\0'
				&& s2[i] != '\0')))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <string.h>
int	main()
{
	printf("%d\n",ft_strncmp("yasin","yasir",5));
	//printf("%d",strncmp("test\200", "test\0", 6));
}*/
// iki stringi karsilastirir fark gordugunde char farkini return eder.
