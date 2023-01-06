/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverserotates.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:37:45 by fkaya             #+#    #+#             */
/*   Updated: 2022/12/19 16:57:44 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rrx(t_stack **x)
{
	t_stack	*travel;
	t_stack	*tmp;
	t_stack	*last;

	travel = *x;
	tmp = *x;
	if (!x || !(travel->next))
		return ;
	while (travel->next)
	{
		last = travel;
		travel = travel->next;
	}
	last->next = 0;
	travel->next = tmp;
	*x = travel;
}

void	rra(t_stack **a)
{
	rrx(a);
	ft_printf("rra\n");
}

void	rrb(t_stack **b)
{
	rrx(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	rrx(a);
	rrx(b);
	ft_printf("rrr\n");
}

void	rr_n(t_stack **a, t_stack **b, int repeat, char mod)
{
	if (mod == 'a' || mod == 'A')
	{
		while (repeat--)
			rra(a);
	}
	else if (mod == 'b' || mod == 'B')
	{
		while (repeat--)
			rrb(b);
	}
	else if (mod == 'r' || mod == 'R')
	{
		while (repeat--)
			rrr(a, b);
	}
}
