/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotates.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:38:02 by fkaya             #+#    #+#             */
/*   Updated: 2022/12/19 16:57:58 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rx(t_stack **x)
{
	t_stack	*travel;
	t_stack	*tmp;

	if (!x)
		return ;
	travel = *x;
	tmp = *x;
	while (travel->next)
		travel = travel->next;
	travel->next = tmp;
	*x = (*x)->next;
	tmp ->next = NULL;
}

void	ra(t_stack **a)
{
	rx(a);
	ft_printf("ra\n");
}

void	rb(t_stack **b)
{
	rx(b);
	ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	rx(a);
	rx(b);
	ft_printf("rr\n");
}

void	r_n(t_stack **a, t_stack **b, int repeat, char mod)
{
	if (mod == 'a' || mod == 'A')
	{
		while (repeat--)
			ra(a);
	}
	else if (mod == 'b' || mod == 'B')
	{
		while (repeat--)
			rb(b);
	}
	else if (mod == 'r' || mod == 'R')
	{
		while (repeat--)
			rr(a, b);
	}
}
