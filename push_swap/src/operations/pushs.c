/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:36:26 by fkaya             #+#    #+#             */
/*   Updated: 2022/12/19 16:57:29 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	pp(t_stack **x, t_stack **y)
{
	t_stack	*tmp;

	if (!(*y))
		return ;
	tmp = *y;
	*y = (*y)->next;
	(*tmp).next = *x;
	*x = tmp;
}

void	pa(t_stack **a, t_stack **b)
{
	pp(a, b);
	ft_printf("pa\n");
}

void	pb(t_stack **a, t_stack **b)
{
	pp(b, a);
	ft_printf("pb\n");
}

void	p_n(t_stack **a, t_stack **b, int repeat, char mod)
{
	if (mod == 'a' || mod == 'A')
	{
		while (repeat--)
			pa(a, b);
	}
	else if (mod == 'b' || mod == 'B')
	{
		while (repeat--)
			pb(a, b);
	}
}
