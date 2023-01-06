/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:59:05 by fkaya             #+#    #+#             */
/*   Updated: 2022/12/17 14:59:06 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ! Not working yet
/*
void	quicksort(t_stack **a, t_stack **b, int min, int max)
{
	int	i;
	int	pivot;
	int	array;

	array = max - min;
	if (array < 2)
	{
		if ((*a)->index > (*a)->next->index)
			sa(a);
		return ;
	}
	while (min--)
		ra(a);
	min = max - array;
	array = max;
	i = 0;
	pivot = (max - min) - (max / 2);
	while (haspush(*a, &pivot))
	{
		while ((*a)->index != pivot)
		{
			if ((*a)->index <= pivot)
			{
				pb(a, b);
				continue ;
			}
			if ((*a)->index > (*a)->next->index)
			{
				sa(a);
				continue ;
			}
			ra(a);
			i++;
		}
		pb(a, b);
		pivot--;
	}
	while (i--)
		rra(a);
	while ((*b))
	{
		pa(a, b);
		array--;
	}
	quicksort(a, b, min, (max / 2) - 1);
	quicksort(a, b, max / 2, max);
}
*/
