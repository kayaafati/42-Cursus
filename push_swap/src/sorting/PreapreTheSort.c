/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PreapreTheSort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:58:38 by fkaya             #+#    #+#             */
/*   Updated: 2022/12/19 17:01:28 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(int *x, int *y)
{
	int	c;

	c = *x;
	*x = *y;
	*y = c;
}

static void	quicksort(int number[], int first, int last)
{
	int	i;
	int	j;
	int	pivot;

	if (first < last)
	{
		pivot = first;
		i = first;
		j = last;
		while (i < j)
		{
			while (number[i] <= number[pivot] && i < last)
				i++;
			while (number[j] > number[pivot])
				j--;
			if (i < j)
				swap(&number[i], &number[j]);
		}
		swap(&number[pivot], &number[j]);
		quicksort(number, first, j - 1);
		quicksort(number, j + 1, last);
	}
}

static int	*sortby(t_stack *a)
{
	int		travel;
	int		*index;
	t_stack	*tmp;

	travel = 0;
	tmp = a;
	while (tmp)
	{
		travel++;
		tmp = tmp->next;
	}
	index = ft_calloc(sizeof(int), travel + 1);
	travel = 0;
	tmp = a;
	while (tmp)
	{
		index[travel++] = tmp->number;
		tmp = tmp->next;
	}
	quicksort(index, 0, travel - 1);
	return (index);
}

t_stack	*minisort(t_stack *a)
{
	int		i;
	int		*index;
	t_stack	*tmp;

	index = sortby(a);
	tmp = a;
	while (tmp)
	{
		i = 0;
		while (tmp->number != index[i])
			i++;
		tmp->index = i;
		tmp = tmp->next;
	}
	free(index);
	return (a);
}
