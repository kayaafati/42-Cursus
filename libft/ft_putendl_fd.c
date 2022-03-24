/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:49:56 by fkaya             #+#    #+#             */
/*   Updated: 2022/02/23 17:24:23 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	size_t	x;

	x = 0;
	if (str)
	{
		while (str[x] != '\0')
		{
			write(fd, &str[x], 1);
			x++;
		}
	}
	write(fd, "\n", 1);
}
// s yi yazar sona enter basar.
