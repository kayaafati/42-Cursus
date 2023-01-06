/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:49:41 by fkaya             #+#    #+#             */
/*   Updated: 2022/02/23 17:24:47 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	size_t	x;

	x = 0;
	while (s && s[x] != '\0')
	{
		write(fd, &s[x], 1);
		x++;
	}
}
// fd ye s stringini yazar.
