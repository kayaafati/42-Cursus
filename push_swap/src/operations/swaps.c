/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:38:28 by fkaya             #+#    #+#             */
/*   Updated: 2022/12/19 16:58:09 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*sx(t_stack *x)
{
	t_stack	*tmp;
	t_stack	*cup;

	if (!x || !(x->next))
		return (x);
	tmp = x->next;
	cup = tmp->next;
	tmp->next = x;
	x->next = cup;
	return (tmp);
}

void	sa(t_stack **a)
{
	*a = sx(*a);
	ft_printf("sa\n");
}

void	sb(t_stack **b)
{
	*b = sx(*b);
	ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b)
{
	*a = sx(*a);
	*b = sx(*b);
	ft_printf("ss\n");
}
