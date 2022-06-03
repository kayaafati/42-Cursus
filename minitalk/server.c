/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 11:39:06 by fkaya             #+#    #+#             */
/*   Updated: 2022/06/03 16:34:45 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

void	ft_signal(int sig)
{
	static unsigned char	x;
	static int				i;

	if (sig == SIGUSR1)
		x = x | 1;
	i++;
	if (i == 8)
	{
		ft_putchar_fd(x, 1);
		x = 0;
		i = 0;
	}
	x = x << 1;//00000000
}

int	main(void)
{
	ft_putstr_fd("server PID: ", 1);
	ft_putnbr_fd(getpid(), 1);
	ft_putchar_fd('\n', 1);
	signal(SIGUSR1, ft_signal);
	signal(SIGUSR2, ft_signal);
	while (1)
		pause();
	return (0);
}
