/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fkaya <fkaya@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 15:01:38 by fkaya             #+#    #+#             */
/*   Updated: 2022/12/21 02:00:08 by fkaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*getstack(char **argv, int argc, t_stack *a)
{
	int	arg;
	int	travel;

	travel = 0;
	if (!(argc > 2))
	{
		argv = ft_split(argv[1], ' ');
		travel--;
	}
	while (argv[++travel])
	{
		if (!arginputcontrol(argv[travel], &arg) || !control(a, arg, 1))
			exit(ft_printf("Error\n"));
		a = addnode(a, arg);
	}
	return (a);
}

void	printstack(t_stack *a, t_stack *b)
{
	ft_printf("a : ");
	while (a)
	{
		ft_printf("%d(%d)", a->number, a->index);
		a = a->next;
		if (a)
			ft_printf(" - ");
	}
	ft_printf("\nb : ");
	while (b)
	{
		ft_printf("%d(%d)", b->number, b->index);
		b = b->next;
		if (b)
			ft_printf(" - ");
	}
	ft_printf("\n");
}

static void	freestack(t_stack *a)
{
	t_stack	*tmp;
	t_stack	*delete;

	tmp = a;
	while (tmp)
	{
		delete = tmp;
		tmp = tmp->next;
		free(delete);
	}
}
//#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		len;

	a = 0;
	b = 0;
	if (argc == 1)
		return (0);
	a = getstack(argv, argc, a);
	a = minisort(a);
	len = stacklen(a);
	if (!issorted(a, b))
		return (0);
	if (len == 1)
		return (0);
	else if (len < 6)
		shortsort(&a, &b);
	else
		sortradix(&a, &b);
	freestack(a);
	freestack(b);
}
