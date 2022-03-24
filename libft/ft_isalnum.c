/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:40:11 by fkaya             #+#    #+#             */
/*   Updated: 2022/02/26 20:13:12 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) || ft_isdigit(c)))
		return (1);
	else
		return (0);
}
/*#include <stdio.h>
int	main()
{
	printf("%d",ft_isalnum('a'));
}*/
//harf ve rakam kontrolü yapar, aksi durumda 0 döndürür
